<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $loggedIn = true;
    $admin = false;

    if ($loggedIn && $admin) {
        echo "Access granted: Admin panel.<br>";
    } elseif ($loggedIn) {
        echo "Access granted: User dashboard.<br>";
    } else {
        echo "Access denied: Please log in.<br>";
    }
    ?>
</body>

</html>