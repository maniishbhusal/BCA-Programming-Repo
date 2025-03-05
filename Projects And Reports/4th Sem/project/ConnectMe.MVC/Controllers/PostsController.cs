using backend.Context;
using ConnectMe.MVC.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace ConnectMe.MVC.Controllers
{
    public class PostsController : Controller
    {
        private readonly ApplicationDbContext _context;
        private readonly IWebHostEnvironment _webHostEnvironment;

        public PostsController(ApplicationDbContext context, IWebHostEnvironment webHostEnvironment)
        {
            _context = context;
            _webHostEnvironment = webHostEnvironment;
        }

        // GET: /Posts
        public async Task<IActionResult> Index()
        {
            var posts = await _context.Posts
                .OrderByDescending(p => p.CreatedAt)
                .ToListAsync();
            return View(posts);
        }

        // POST: /Posts/Create
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Create([Bind("Title,Description")] Post post, IFormFile? image)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    if (image != null)
                    {
                        string uploadsFolder = Path.Combine(_webHostEnvironment.WebRootPath, "uploads");
                        string uniqueFileName = Guid.NewGuid().ToString() + "_" + image.FileName;
                        string filePath = Path.Combine(uploadsFolder, uniqueFileName);

                        Directory.CreateDirectory(uploadsFolder);
                        await image.CopyToAsync(new FileStream(filePath, FileMode.Create));

                        post.ImagePath = "/uploads/" + uniqueFileName;
                    }

                    _context.Add(post);
                    await _context.SaveChangesAsync();
                    return RedirectToAction(nameof(Index));
                }
            }
            catch (Exception ex)
            {
                ModelState.AddModelError("", "Unable to create post. Please try again.");
            }

            return RedirectToAction(nameof(Index));
        }

        // GET: /Posts/Edit/5
        public async Task<IActionResult> Edit(int id)
        {
            var post = await _context.Posts.FindAsync(id);
            if (post == null)
            {
                return Json(new { success = false, message = "Post not found" });
            }
            return Json(new { success = true, post = post });
        }

        // POST: /Posts/Edit/5
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Edit(int id, [Bind("Title,Description")] Post updatedPost, IFormFile? image)
        {
            try
            {
                var post = await _context.Posts.FindAsync(id);
                if (post == null)
                {
                    return Json(new { success = false, message = "Post not found" });
                }

                if (ModelState.IsValid)
                {
                    // Update text fields
                    post.Title = updatedPost.Title;
                    post.Description = updatedPost.Description;
                    post.UpdatedAt = DateTime.UtcNow;

                    // Handle new image upload
                    if (image != null)
                    {
                        // Delete old image if exists
                        if (!string.IsNullOrEmpty(post.ImagePath))
                        {
                            var oldImagePath = Path.Combine(_webHostEnvironment.WebRootPath,
                                post.ImagePath.TrimStart('/'));
                            if (System.IO.File.Exists(oldImagePath))
                            {
                                System.IO.File.Delete(oldImagePath);
                            }
                        }

                        // Save new image
                        string uploadsFolder = Path.Combine(_webHostEnvironment.WebRootPath, "uploads");
                        string uniqueFileName = Guid.NewGuid().ToString() + "_" + image.FileName;
                        string filePath = Path.Combine(uploadsFolder, uniqueFileName);

                        Directory.CreateDirectory(uploadsFolder);
                        await image.CopyToAsync(new FileStream(filePath, FileMode.Create));

                        post.ImagePath = "/uploads/" + uniqueFileName;
                    }

                    await _context.SaveChangesAsync();
                    return Json(new { success = true });
                }
            }
            catch (Exception ex)
            {
                return Json(new { success = false, message = "Error updating post" });
            }

            return Json(new { success = false, message = "Invalid model state" });
        }

        // POST: /Posts/Delete/5
        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Delete(int id)
        {
            try
            {
                var post = await _context.Posts.FindAsync(id);
                if (post != null)
                {
                    if (!string.IsNullOrEmpty(post.ImagePath))
                    {
                        var imagePath = Path.Combine(_webHostEnvironment.WebRootPath,
                            post.ImagePath.TrimStart('/'));
                        if (System.IO.File.Exists(imagePath))
                        {
                            System.IO.File.Delete(imagePath);
                        }
                    }

                    _context.Posts.Remove(post);
                    await _context.SaveChangesAsync();
                }
            }
            catch (Exception ex)
            {
                return Json(new { success = false, message = "Error deleting post" });
            }

            return Json(new { success = true });
        }
    }
}
