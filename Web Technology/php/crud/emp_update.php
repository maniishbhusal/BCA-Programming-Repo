<!-- Page Name : emp_update.php -->
<!-- CRUD : Update Operation -->
<?php
include 'connect.php';
include 'emp_index.php';
// To handle the form

//To get the id of the element
$id = $_GET['updateid'];

//To display data in update form from table.
$sql = "SELECT *FROM `employee` where id=$id";
$result = mysqli_query($conn, $sql);

// To fetch that particular row data and display in the output screen
$row = mysqli_fetch_assoc($result);
$name = $row['name'];
$address = $row['address'];
$email = $row['email'];
$phone = $row['phone'];
$post = $row['post'];

//to check whether the request method is GET or POST
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    //These are variables to carry data.

    $name = $_REQUEST["name"];
    $address = $_REQUEST["address"];
    $email = $_REQUEST["email"];
    $phone = $_REQUEST["phone"];
    $post = $_REQUEST["post"];

    //Query to execute :: TO UPDATE CONTENT INTO THE Table GIVEN BY THE USER
    $sql = "UPDATE `employee` SET id=$id,name = '$name',address='$address', email='$email', phone='$phone',post='$post' WHERE id = $id";
    //instead of employee give your table name

    $result = mysqli_query($conn, $sql);


    if ($result) {
        header('location:emp_view.php'); // to navigate the page to the view page
        $insert = true;
    } else {
        echo "Sorry, your data can't be added" . mysqli_error($conn);
    }
}
// Close connection
mysqli_close($conn);

?>
<!DOCTYPE html>
<html>

<head>
    <title>Update - Employee</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-4bw+/aepP/YC94hEpVNVgiZdgIC5+VKNBQNGCHeKRQN+PtmoHDEXuppvnDJzQIu9" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js" integrity="sha384-I7E8VVD/ismYTF4hNIPjVp/Zjvgyol6VFvRkX/vR+Vc4jQkC+hVqc2pM8ODewa9r" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.1/dist/js/bootstrap.min.js" integrity="sha384-Rx+T1VzGupg4BHQYs2gCW9It+akI2MM/mndMCy36UVfodzcJcF0GGLxZIzObiEfa" crossorigin="anonymous"></script>
    <style>
        .container {
            margin-left: auto;
            margin-right: auto;
            font-size: 18px;
            font-weight: bold;
        }

        h1 {
            text-align: center;
            font-size: 40px;
            color: red;
            font-family: Dancing Script;
            font-weight: bolder;
        }

        hr {
            width: 50%;
        }
    </style>

</head>

<body>

    <h1>Enter New Details</h1>

    <div class="container">
        <form method="post">

            <div class="mb-3">
                <label for="name" class="form-label">Name</label>
                <input type="text" class="form-control" id="name" aria-describedby="name" name="name" value="<?php echo $name; ?>">
            </div>

            <div class="mb-3">
                <label for="address" class="form-label">Address</label>
                <input type="text" class="form-control" id="address" name="address" value="<?php echo $address; ?>">
            </div>

            <div class="mb-3">
                <label for="email" class="form-label">Email</label>
                <input type="email" class="form-control" id="email" aria-describedby="name" name="email" value="<?php echo $email; ?>">
            </div>

            <div class="mb-3">
                <label for="post" class="form-label">Phone</label>
                <input type="text" class="form-control" id="post" aria-describedby="name" name="phone" value="<?php echo $phone; ?>">
            </div>

            <div class="mb-3">
                <label for="post" class="form-label">Post</label>
                <input type="text" class="form-control" id="post" aria-describedby="name" name="post" value="<?php echo $post; ?>">
            </div>

            <input type="submit" value="Update" class="btn btn-primary">
        </form>
    </div>

</body>

</html>