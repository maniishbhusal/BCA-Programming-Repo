<?php

// Sessions are a way to store user data across multiple pages
// They work by creating a unique session ID for each user
// This ID is stored in a cookie on the user's computer
// The actual session data is stored on the server

// Start the session - must be called before any output
session_start();

// Setting session variables
$_SESSION['username'] = 'john_doe';
$_SESSION['email'] = 'john@example.com';
$_SESSION['is_logged_in'] = true;

// Example of checking if user is logged in
if (isset($_SESSION['is_logged_in']) && $_SESSION['is_logged_in'] === true) {
    echo "Welcome " . $_SESSION['username'];
} else {
    echo "Please log in";
}

// Example of a login system using sessions
function login($username, $password) {
    // Assume password verification happens here
    if ($username === 'admin' && $password === 'password123') {
        $_SESSION['user_id'] = 1;
        $_SESSION['username'] = $username;
        $_SESSION['logged_in'] = true;
        return true;
    }
    return false;
}

// Example of logout - destroying session
function logout() {
    // Unset all session variables
    session_unset();
    
    // Destroy the session
    session_destroy();
    
    // Delete the session cookie
    if (isset($_COOKIE[session_name()])) {
        setcookie(session_name(), '', time() - 3600, '/');
    }
    echo "You have been logged out.";
}

// Example of shopping cart using sessions
$_SESSION['cart'] = array();

// Add item to cart
function addToCart($product_id, $quantity) {
    if (!isset($_SESSION['cart'][$product_id])) {
        $_SESSION['cart'][$product_id] = $quantity;
    } else {
        $_SESSION['cart'][$product_id] += $quantity;
    }
    echo "Added $quantity of Product $product_id to your cart.";
}

// Remove item from cart
function removeFromCart($product_id) {
    if (isset($_SESSION['cart'][$product_id])) {
        unset($_SESSION['cart'][$product_id]);
        echo "Removed Product $product_id from your cart.";
    } else {
        echo "Product $product_id not found in your cart.";
    }
}

// Example of session timeout
// Set session to expire in 30 minutes
ini_set('session.gc_maxlifetime', 1800);
session_set_cookie_params(1800);

// Example of checking session status
if (session_status() === PHP_SESSION_NONE) {
    session_start();
}

// Example of session security
// Regenerate session ID to prevent session fixation
session_regenerate_id(true);

// Example of storing complex data in sessions
$_SESSION['user'] = array(
    'id' => 123,
    'name' => 'John Doe',
    'preferences' => array(
        'theme' => 'dark',
        'language' => 'en'
    )
);

// Example of accessing nested session data
echo $_SESSION['user']['preferences']['theme']; // outputs: dark

// Example of modifying session data
function updateTheme($new_theme) {
    $_SESSION['user']['preferences']['theme'] = $new_theme;
    echo "Theme updated to: " . $_SESSION['user']['preferences']['theme'];
}

// Example of displaying session data
function displayCart() {
    if (empty($_SESSION['cart'])) {
        echo "Your shopping cart is empty.";
    } else {
        echo "Items in your cart: <br>";
        foreach ($_SESSION['cart'] as $product_id => $quantity) {
            echo "Product ID: $product_id, Quantity: $quantity <br>";
        }
    }
}

// Example of session expiration and timeout check
function checkSessionTimeout() {
    $timeout_duration = 1800; // 30 minutes
    if (isset($_SESSION['last_activity']) && (time() - $_SESSION['last_activity']) > $timeout_duration) {
        logout();
        echo "Session expired. Please log in again.";
    } else {
        $_SESSION['last_activity'] = time(); // Update last activity time
    }
}

// Calling the session timeout check
checkSessionTimeout();

?>
