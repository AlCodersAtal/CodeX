<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Login to CodeX</title>
</head>
<body>
    <h2>Enter your Detials to Login to CodeX</h2>
    <form action="verify_otp.php" method="post">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required><br><br>
        <label for="otp">Password:</label>
        <input type="text" id="otp" name="otp" required><br><br>
        <label for="patientNumber">Patient Number:</label>
        <input type="text" id="patientNumber" name="patientNumber" required><br><br>
        <input type="submit" value="Login">
    </form>
</body>
</html>
