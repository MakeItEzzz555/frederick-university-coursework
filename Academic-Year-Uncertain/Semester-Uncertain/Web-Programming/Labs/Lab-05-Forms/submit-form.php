<!DOCTYPE html>
<html lang="en">
<?php include("header.php"); ?>
<body>
<?php include("navbar.php"); ?>

<div class="content">
    <h2>Form Submission Result</h2>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $name = htmlspecialchars($_POST['name']);
        $email = htmlspecialchars($_POST['email']);

        echo "<p><strong>Name:</strong> $name</p>";
        echo "<p><strong>Email:</strong> $email</p>";
    } else {
        echo "<p>No data submitted.</p>";
    }
    ?>
</div>

<?php include("footer.php"); ?>
</body>
</html>
