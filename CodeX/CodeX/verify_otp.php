<?php
$host = "localhost";
$user = "root";
$pass = "";
$db = "health database";
$conn = new mysqli($host, $user, $pass, $db);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name = $_POST['name'];
$otp = $_POST['otp'];
$patientNumber = $_POST['patientNumber'];

// Verify OTP
$sql = "SELECT * FROM users WHERE name = '$name' AND otp = '$otp' AND patient_number = '$patientNumber' ";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    $row = $result->fetch_assoc();
    echo "<h2>Welcome to CodeX, " . $row['name'] . "!</h2>";
    echo "<p>Here is your report.{$row['name']}   <button onclick=\"window.open('{$row['report']}', '_blank')\">Open Report</button>";
} else {
    echo "Invalid OTP. Please try again.";
}

$conn->close();
?>