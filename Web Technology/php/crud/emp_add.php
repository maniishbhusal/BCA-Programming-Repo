    <!-- Page Name : emp_add.php -->
    <!-- CRUD : Create Operation -->
    <?php
    include 'connect.php';
    include 'emp_index.php';
    // To handle the form
    //to check whether the request method is GET or POST
    if($_SERVER['REQUEST_METHOD']=='POST')  
    {
        //These are variables to carry data.
        $name = $_REQUEST["name"];
        $address = $_REQUEST["address"];
        $email = $_REQUEST["email"];
        $phone = $_REQUEST["phone"];
        $post = $_REQUEST["post"];
        
      //Query to execute :: TO INSERT CONTENT INTO THE DATABASE GIVEN BY THE USER
      $sql = "INSERT INTO `employee` (`name`,`address`,`email`,`phone`,`post`) 
              VALUES ('$name','$address','$email','$phone','$post')";
      //instead of employee give your table name

      $result = mysqli_query($conn,$sql);

      // to generate the message :: usually at the top
      if($result){
        echo "<div class='alert alert-success alert-dismissible fade show' role='alert'>
        <strong>Success ! !</strong> Employee is added.
        <button type='button' class='btn-close' data-bs-dismiss='alert' aria-label='Close'></button>
      </div>";
        $insert=true;
      }
      else{
        echo "Sorry, your data can't be added".mysqli_error($conn);
      }
    }
        // Close connection
        mysqli_close($conn);

    ?>
    <!DOCTYPE html>
    <html>

    <head>
      <title>Home - Employee</title>
      <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.1/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-4bw+/aepP/YC94hEpVNVgiZdgIC5+VKNBQNGCHeKRQN+PtmoHDEXuppvnDJzQIu9" crossorigin="anonymous">
      <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js"
        integrity="sha384-I7E8VVD/ismYTF4hNIPjVp/Zjvgyol6VFvRkX/vR+Vc4jQkC+hVqc2pM8ODewa9r"
        crossorigin="anonymous"></script>
      <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.1/dist/js/bootstrap.min.js"
        integrity="sha384-Rx+T1VzGupg4BHQYs2gCW9It+akI2MM/mndMCy36UVfodzcJcF0GGLxZIzObiEfa"
        crossorigin="anonymous"></script>
        <style>
          .container{
            margin-left: auto;
            margin-right: auto;
            font-size: 18px;
            font-weight: bold;
          }
          h1{
            text-align: center;
            font-size: 40px;
            color: red;
            font-family: Dancing Script;
            font-weight: bolder;
          }
          hr{
            width: 50%;
          }
        </style>

    </head>

    <body>

      <h1>Enter Employee Details</h1>

      <div class="container">
        <form action="emp_add.php" method="post">

          <div class="mb-3">
            <label for="name" class="form-label">Name</label>
            <input type="text" class="form-control" id="name" aria-describedby="name" name="name">
          </div>

          <div class="mb-3">
            <label for="address" class="form-label">Address</label>
            <input type="text" class="form-control" id="address" name="address">
          </div>

          <div class="mb-3">
            <label for="email" class="form-label">Email</label>
            <input type="email" class="form-control" id="email" aria-describedby="name" name="email">
          </div>

          <div class="mb-3">
            <label for="phone" class="form-label">Phone</label>
            <input type="text" class="form-control" id="mobile" aria-describedby="name" name="phone">
          </div>

          <div class="mb-3">
            <label for="post" class="form-label">Post</label>
            <input type="text" class="form-control" id="post" aria-describedby="name" name="post">
          </div>

          <input type="submit" value="Add Employee" class="btn btn-primary">
        </form>
        </div>

    </body>
    </html>