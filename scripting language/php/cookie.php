
<?php
// What is a Cookie?
// - A cookie is a small piece of data stored as a text file on the user's computer by websites
// - Cookies are used to remember stateful information in the stateless HTTP protocol
// - They are primarily used for session management, user preferences, and tracking

// How do Cookies Work?
// 1. Server creates a cookie by sending Set-Cookie HTTP header in response
// 2. Browser stores the cookie locally on user's computer
// 3. Browser sends cookie back to server with every subsequent request to that domain
// 4. Server can read cookie values to identify users and maintain state

// Cookie Properties:
// - Name: Unique identifier for the cookie
// - Value: The actual data stored in the cookie
// - Expiry: When the cookie should be deleted (optional)
// - Path: What website paths can access the cookie
// - Domain: What domain can access the cookie
// - Secure: If cookie should only be sent over HTTPS
// - HttpOnly: If cookie can be accessed by JavaScript

// Common Uses of Cookies:
// - Session management (user logins, shopping carts)
// - Personalization (user preferences, themes)
// - Tracking (user behavior, analytics)

// Cookie Limitations:
// - Size limit (typically 4KB)
// - Limited to a specific domain
// - Can be disabled by users
// - Subject to privacy laws and regulations
?>

<?php
// Set a cookie that expires in 1 hour
// This cookie:
// - Name: "user"
// - Value: "John Doe" 
// - Expiration: Set to 1 hour (3600 seconds) from current time
// - Path: "/" means cookie is available across entire domain
setcookie("user", "John Doe", time() + 3600, "/");

// Check if cookie exists and display its value
if(isset($_COOKIE["user"])) {
    echo "Welcome " . $_COOKIE["user"];
} else {
    echo "Welcome Guest!";
}

// Delete a cookie by setting expiration time in past
setcookie("user", "", time() - 3600, "/");

// Set multiple cookies with different values
setcookie("username", "johndoe123", time() + (86400*30), "/");
setcookie("role", "user", time() + 3600, "/");

// Check if multiple cookies exist
if(isset($_COOKIE["username"]) && isset($_COOKIE["email"]) && isset($_COOKIE["role"])) {
    echo "User details:<br>";
    echo "Username: " . $_COOKIE["username"] . "<br>";
    echo "Email: " . $_COOKIE["email"] . "<br>"; 
    echo "Role: " . $_COOKIE["role"];
} else {
    echo "Some cookie data is missing!";
}

// Delete all cookies
setcookie("username", "", time() - 3600, "/");
setcookie("email", "", time() - 3600, "/"); 
setcookie("role", "", time() - 3600, "/");

// Clear cookie data from superglobal array
unset($_COOKIE["username"]);
unset($_COOKIE["email"]);
unset($_COOKIE["role"]);

// Verify cookies were deleted
if(!isset($_COOKIE["username"]) && !isset($_COOKIE["email"]) && !isset($_COOKIE["role"])) {
    echo "All cookies have been deleted successfully";
} else {
    echo "Error deleting cookies";
}
?>