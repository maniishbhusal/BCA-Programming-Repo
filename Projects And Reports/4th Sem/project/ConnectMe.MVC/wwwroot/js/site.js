function editPost(postId) {
    $.get('/Posts/Edit/' + postId)
        .done(function (response) {
            if (response.success) {
                $('#editPostId').val(postId);
                $('#editTitle').val(response.post.title);
                $('#editDescription').val(response.post.description);
                $('#editModal').modal('show');
            }
        });
}

function updatePost() {
    var postId = $('#editPostId').val();
    var formData = new FormData($('#editForm')[0]);

    $.ajax({
        url: '/Posts/Edit/' + postId,
        type: 'POST',
        data: formData,
        processData: false,
        contentType: false,
        headers: {
            'RequestVerificationToken': $('input[name="__RequestVerificationToken"]').val()
        },
        success: function (response) {
            if (response.success) {
                location.reload();
            } else {
                alert(response.message || 'Error updating post');
            }
        },
        error: function () {
            alert('Error updating post');
        }
    });
}

function deletePost(postId) {
    if (confirm('Are you sure you want to delete this post?')) {
        $.post('/Posts/Delete/' + postId, {
            '__RequestVerificationToken': $('input[name="__RequestVerificationToken"]').val()
        })
            .done(function (response) {
                if (response.success) {
                    location.reload();
                } else {
                    alert('Error deleting post');
                }
            })
            .fail(function () {
                alert('Error deleting post');
            });
    }
}

// Functions for post creation appear when + button is clicked
function togglePostForm() {
    const form = document.getElementById('postCreationForm');
    form.classList.toggle('d-none'); // Toggle visibility
}

// Close button functionality
document.getElementById('closePostForm').addEventListener('click', () => {
    const form = document.getElementById('postCreationForm');
    form.classList.add('d-none'); // Hide form
});

// Mobile Sidebar Toggle
document.addEventListener('DOMContentLoaded', function () {
    const toggleButton = document.getElementById('toggleLeftSidebar');
    const leftSidebar = document.querySelector('.left-sidebar');
    const sidebarOverlay = document.getElementById('sidebarOverlay');

    toggleButton.addEventListener('click', function () {
        leftSidebar.classList.toggle('show');
        sidebarOverlay.classList.toggle('show');
    });

    sidebarOverlay.addEventListener('click', function () {
        leftSidebar.classList.remove('show');
        sidebarOverlay.classList.remove('show');
    });
});

// Ensure mobile-friendly interactions
document.addEventListener('DOMContentLoaded', function () {
    // Adjust post creation form for mobile
    const postForm = document.getElementById('postCreationForm');
    const postActions = postForm?.querySelector('.post-actions');

    if (postActions) {
        postActions.classList.add('d-flex', 'flex-column', 'flex-md-row');
    }

    // Make post interactions more mobile-friendly
    const postInteractions = document.querySelectorAll('.post-interactions');
    postInteractions.forEach(interactions => {
        interactions.classList.add('d-flex', 'flex-column', 'flex-md-row');
    });
});