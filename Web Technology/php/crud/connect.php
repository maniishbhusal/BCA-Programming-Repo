<!-- Page Name : connect.php -->
<!-- Connection Page -->
<?php
//Connect to the database:
$insert=false;

$servername="localhost";
$username="root";
$password="";
$database="amc"; //database name which you created 

//Create a connection
$conn = mysqli_connect($servername,$username,$password,$database); 

//Die if connection was not successsful
if(!$conn)
{
  die("Sorry we failed to connect.Please check the connection   ".mysqli_connect_error());
}
else{
  // echo "Connection is successful";
}

?>