<!-- Page Name : emp_delete.php -->
<!-- CRUD : Delete Operation -->
<?php
include 'connect.php';

if(isset($_GET['deleteid'])){
    $id=$_GET['deleteid'];
    $sql = "DELETE from `employee` where id=$id";
    $result=mysqli_query($conn,$sql); //to execute qyery 
    
    if($result){
        echo "Deleted Successfully";
        header('location:emp_view.php');
    }
    else{
        die(mysqli_error($conn));
    }
}
?>