<!-- Page Name : emp_view.php -->
<!-- CRUD : Read Operation -->
<?php
include 'connect.php';
include 'emp_index.php';
?>
<html>
<head>
  <title> Student list</title>
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
        text-align:center;
      }
    </style>
</head>

<body>
  <br><br>
  <h2 style="text-align:center; font-size:30px; color:red; font-weight:bolder;">Current Employee in EMS</h2>
  <div class="container">
    <table class="table">
      <thead>
        <tr>
          <th scope="col">S.No.</th>
          <th scope="col">Name</th>
          <th scope="col">Address</th>
          <th scope="col">Email</th>
          <th scope="col">Phone</th>
          <th scope="col">Post</th>
          <th scope="col">Delete</th>
        </tr>
      </thead>
      <tbody>
        <!-- To fetch the contents from the database table -->
        <?php
            $sql = "SELECT *FROM `employee`";
            $result=mysqli_query($conn,$sql);
            $sno =0;
            while($row=mysqli_fetch_assoc($result)){
                $sno=$sno+1;
                $id=$row['id']; //to get the id from the table
              echo '<tr>  
              <th>'.$sno.'</th>
              <td>'.$row['name'].'</td>
              <td>'.$row['address'].'</td>
              <td>'.$row['email'].'</td>
              <td>'.$row['phone'].'</td>
              <td>'.$row['post'].'</td>
              <td><button type="button" class="btn btn-danger"><a href="emp_delete.php?deleteid='.$id.'" class="text-light">Delete</a></button></td>
            </tr>';
            };
            ?> 
        <!-- End: Fetching -->
      </tbody>
    </table>
  </div>
</body>
</html>