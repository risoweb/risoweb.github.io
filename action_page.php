<?php
$servername = "www.phpmyadmin.co";
$database = "sql10422696";
$username = "sql10422696";
$password = "c81SexNTlP";
// Create connection
$conn = mysqli_connect($servername, $username, $password, $database);
// Check connection
if (!$conn) {
      die("Connection failed: " . mysqli_connect_error());
}
 
echo "Connected successfully";
 
$sql = "INSERT INTO geral (cliente, produto, cor, pagamento, obs, entrega) VALUES ('ok', 'ok', 'ok', '00', 'ok', '00')";
if (mysqli_query($conn, $sql)) {
      echo "New record created successfully";
} else {
      echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}
mysqli_close($conn);
?>