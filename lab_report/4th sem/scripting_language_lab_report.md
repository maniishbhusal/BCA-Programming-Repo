### Lab Report: Scripting Language 
**Course**: BCA - 4th Semester

---

### Lab 1: Introduction to JavaScript
**Objective**: Learn basic JavaScript syntax and implement basic operations.

**Task 1**: Create a script to calculate the factorial of a given number.
```html
<!DOCTYPE html>
<html>
<head>
    <title>Factorial Calculator</title>
</head>
<body>
    <h2>Factorial Calculator</h2>
    <label for="number">Enter a number:</label>
    <input type="number" id="number" />
    <button onclick="calculateFactorial()">Calculate</button>
    <p id="result"></p>

    <script>
        function calculateFactorial() {
            let num = document.getElementById("number").value;
            let factorial = 1;
            for (let i = 1; i <= num; i++) {
                factorial *= i;
            }
            document.getElementById("result").innerText = `Factorial: ${factorial}`;
        }
    </script>
</body>
</html>
```
---

### Lab 2: JavaScript Form Validation
**Objective**: Implement basic form validation using JavaScript.

**Task 2**: Validate a user registration form for empty fields, email format, and password length.
```html
<!DOCTYPE html>
<html>
<head>
    <title>Form Validation</title>
</head>
<body>
    <h2>Registration Form</h2>
    <form onsubmit="return validateForm()">
        <label for="username">Username:</label>
        <input type="text" id="username" />
        <br>
        <label for="email">Email:</label>
        <input type="email" id="email" />
        <br>
        <label for="password">Password:</label>
        <input type="password" id="password" />
        <br>
        <button type="submit">Register</button>
        <p id="error"></p>
    </form>

    <script>
        function validateForm() {
            let username = document.getElementById("username").value;
            let email = document.getElementById("email").value;
            let password = document.getElementById("password").value;
            let error = "";

            if (!username || !email || !password) {
                error = "All fields are required.";
            } else if (!email.includes("@")) {
                error = "Enter a valid email address.";
            } else if (password.length < 6) {
                error = "Password must be at least 6 characters long.";
            }

            if (error) {
                document.getElementById("error").innerText = error;
                return false;
            }
            return true;
        }
    </script>
</body>
</html>
```
---

### Lab 3: JavaScript Arrays and Loops
**Objective**: Use arrays and loops to perform operations.

**Task 3**: Write a script to find the largest number in an array.
```html
<!DOCTYPE html>
<html>
<head>
    <title>Find Largest Number</title>
</head>
<body>
    <h2>Find the Largest Number in an Array</h2>
    <script>
        const numbers = [10, 5, 8, 20, 15];
        let largest = numbers[0];
        for (let i = 1; i < numbers.length; i++) {
            if (numbers[i] > largest) {
                largest = numbers[i];
            }
        }
        document.write("The largest number is: " + largest);
    </script>
</body>
</html>
```
---

### Lab 4: JavaScript DOM Manipulation
**Objective**: Learn to manipulate the DOM to dynamically update web content.

**Task 4**: Create a script to change the background color of a div element on a button click.
```html
<!DOCTYPE html>
<html>
<head>
    <title>DOM Manipulation</title>
</head>
<body>
    <h2>Change Background Color</h2>
    <div id="colorBox" style="width:200px; height:200px; background-color:lightblue;"></div>
    <button onclick="changeColor()">Change Color</button>

    <script>
        function changeColor() {
            document.getElementById("colorBox").style.backgroundColor = "lightgreen";
        }
    </script>
</body>
</html>
```
---

### Lab 5: JavaScript Event Handling
**Objective**: Understand event handling in JavaScript.

**Task 5**: Create a counter that increments or decrements based on button clicks.
```html
<!DOCTYPE html>
<html>
<head>
    <title>Event Handling</title>
</head>
<body>
    <h2>Counter</h2>
    <p id="counter">0</p>
    <button onclick="increment()">Increment</button>
    <button onclick="decrement()">Decrement</button>

    <script>
        let count = 0;
        function increment() {
            count++;
            document.getElementById("counter").innerText = count;
        }
        function decrement() {
            count--;
            document.getElementById("counter").innerText = count;
        }
    </script>
</body>
</html>
```
---

### Lab 6: JavaScript Functions
**Objective**: Learn to define and use functions in JavaScript.

**Task 6**: Write a script to convert Celsius to Fahrenheit.
```html
<!DOCTYPE html>
<html>
<head>
    <title>Temperature Converter</title>
</head>
<body>
    <h2>Convert Celsius to Fahrenheit</h2>
    <label for="celsius">Celsius:</label>
    <input type="number" id="celsius" />
    <button onclick="convertToFahrenheit()">Convert</button>
    <p id="fahrenheit"></p>

    <script>
        function convertToFahrenheit() {
            let celsius = document.getElementById("celsius").value;
            let fahrenheit = (celsius * 9/5) + 32;
            document.getElementById("fahrenheit").innerText = `Fahrenheit: ${fahrenheit}`;
        }
    </script>
</body>
</html>
```



---

### Lab 7: Introduction to PHP
**Objective**: Learn the basics of PHP and implement basic operations.

**Task 1**: Create a PHP script to display the current date and time.
```php
<!DOCTYPE html>
<html>
<head>
    <title>Current Date and Time</title>
</head>
<body>
    <h2>Current Date and Time</h2>
    <?php
        echo "The current date and time is: " . date("Y-m-d H:i:s");
    ?>
</body>
</html>
```
---

### Lab 8: PHP Form Handling and Validation
**Objective**: Create a simple form and validate user input using PHP.

**Task 2**: Validate a login form for empty fields and correct email format.
```php
<!DOCTYPE html>
<html>
<head>
    <title>Login Form</title>
</head>
<body>
    <h2>Login Form</h2>
    <form method="post" action="">
        <label for="email">Email:</label>
        <input type="email" id="email" name="email">
        <br>
        <label for="password">Password:</label>
        <input type="password" id="password" name="password">
        <br>
        <button type="submit">Login</button>
    </form>

    <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $email = $_POST['email'];
            $password = $_POST['password'];
            if (empty($email) || empty($password)) {
                echo "All fields are required.";
            } elseif (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
                echo "Invalid email format.";
            } else {
                echo "Login successful.";
            }
        }
    ?>
</body>
</html>
```
---

### Lab 9: PHP CRUD Operations - Part 1 (Create and Read)
**Objective**: Implement Create and Read operations using PHP and MySQL.

**Task 3**: Create a simple application to add and display student records.
```php
<!DOCTYPE html>
<html>
<head>
    <title>Student Records</title>
</head>
<body>
    <h2>Add Student</h2>
    <form method="post" action="">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name">
        <br>
        <label for="age">Age:</label>
        <input type="number" id="age" name="age">
        <br>
        <button type="submit">Add</button>
    </form>

    <?php
        $conn = new mysqli("localhost", "root", "", "labdb");
        if ($conn->connect_error) die("Connection failed: " . $conn->connect_error);

        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $name = $_POST['name'];
            $age = $_POST['age'];
            $sql = "INSERT INTO students (name, age) VALUES ('$name', '$age')";
            if ($conn->query($sql) === TRUE) echo "Student added successfully.";
        }

        echo "<h2>Student List</h2>";
        $result = $conn->query("SELECT * FROM students");
        while ($row = $result->fetch_assoc()) {
            echo "<p>Name: " . $row['name'] . ", Age: " . $row['age'] . "</p>";
        }
        $conn->close();
    ?>
</body>
</html>
```
---

### Lab 10: PHP CRUD Operations - Part 2 (Update and Delete)
**Objective**: Implement Update and Delete operations using PHP and MySQL.

**Task 4**: Extend the student records application to update and delete records.
```php
<!DOCTYPE html>
<html>
<head>
    <title>Manage Student Records</title>
</head>
<body>
    <h2>Update or Delete Student</h2>
    <?php
        $conn = new mysqli("localhost", "root", "", "labdb");
        if ($conn->connect_error) die("Connection failed: " . $conn->connect_error);

        if (isset($_GET['delete'])) {
            $id = $_GET['delete'];
            $conn->query("DELETE FROM students WHERE id=$id");
            echo "Record deleted.";
        }

        if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['update'])) {
            $id = $_POST['id'];
            $name = $_POST['name'];
            $age = $_POST['age'];
            $conn->query("UPDATE students SET name='$name', age='$age' WHERE id=$id");
            echo "Record updated.";
        }

        $result = $conn->query("SELECT * FROM students");
        while ($row = $result->fetch_assoc()) {
            echo "<form method='post' action=''>
                    <input type='hidden' name='id' value='" . $row['id'] . "'>
                    <input type='text' name='name' value='" . $row['name'] . "'>
                    <input type='number' name='age' value='" . $row['age'] . "'>
                    <button type='submit' name='update'>Update</button>
                    <a href='?delete=" . $row['id'] . "'>Delete</a>
                </form>";
        }
        $conn->close();
    ?>
</body>
</html>
```
---

### Lab 11: File Upload and Handling
**Objective**: Upload and display files using PHP.

**Task 5**: Create a script to upload and display an image.
```php
<!DOCTYPE html>
<html>
<head>
    <title>File Upload</title>
</head>
<body>
    <h2>Upload Image</h2>
    <form method="post" enctype="multipart/form-data">
        <label for="file">Select Image:</label>
        <input type="file" name="file" id="file">
        <br>
        <button type="submit" name="upload">Upload</button>
    </form>

    <?php
        if (isset($_POST['upload'])) {
            $target_dir = "uploads/";
            $target_file = $target_dir . basename($_FILES["file"]["name"]);
            if (move_uploaded_file($_FILES["file"]["tmp_name"], $target_file)) {
                echo "File uploaded successfully.<br><img src='$target_file' width='200'>";
            } else {
                echo "File upload failed.";
            }
        }
    ?>
</body>
</html>
```
---

### Lab 12: PHP Sessions and Cookies
**Objective**: Manage sessions and cookies in PHP.

**Task 6**: Create a login system using PHP sessions.
```php
<!DOCTYPE html>
<html>
<head>
    <title>Session Management</title>
</head>
<body>
    <?php
        session_start();

        if (isset($_POST['login'])) {
            $_SESSION['user'] = $_POST['username'];
            echo "Welcome, " . $_SESSION['user'] . "!";
        }

        if (isset($_POST['logout'])) {
            session_destroy();
            echo "You have logged out.";
        }
    ?>

    <h2>Login</h2>
    <form method="post">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username">
        <br>
        <button type="submit" name="login">Login</button>
    </form>

    <h2>Logout</h2>
    <form method="post">
        <button type="submit" name="logout">Logout</button>
    </form>
</body>
</html>
```

