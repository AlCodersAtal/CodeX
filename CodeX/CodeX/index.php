<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <title>Welcome</title>
  </head>
  <link rel="stylesheet" href="index.css" />
  <body>
    <h2>Welcome, Enter your Detials to Login</h2>
    <form action="verify_otp.php" method="post">
      <label for="name">Name:</label>
      <input
        type="text"
        id="name"
        name="name"
        placeholder="Enter Name"
        required
      /><br /><br />
      <label for="otp">Password:</label>
      <input
        type="text"
        id="otp"
        name="otp"
        placeholder="Enter password"
        required
      /><br /><br />
      <label for="patientNumber">Patient Number:</label>
      <input
        type="text"
        id="patientNumber"
        name="patientNumber"
        placeholder="Enter Patient Number"
        required
      /><br /><br />
      <input type="submit" value="Login" />
    </form>
  </body>
</html>
