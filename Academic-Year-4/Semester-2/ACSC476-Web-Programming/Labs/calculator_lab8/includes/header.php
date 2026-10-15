<?php
require_once __DIR__ . '/init.php';
$user = current_user();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Lab 8 | Smooth Calculator</title>
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Space+Grotesk:wght@400;500;600;700&display=swap" rel="stylesheet">
    <link rel="stylesheet" href="assets/css/style.css" />
</head>
<body>
    <div class="bg-gradient"></div>
    <header class="site-header">
        <div class="brand">
            <div class="dot"></div>
            <span>ACSC476 · Lab 8</span>
        </div>
        <nav class="nav-links">
            <?php if ($user): ?>
                <a href="calculator.php">Calculator</a>
                <a href="history.php">History</a>
                <a href="about.php">About</a>
                <a class="pill" href="logout.php">Logout</a>
            <?php else: ?>
                <a href="login.php" class="pill">Login</a>
            <?php endif; ?>
        </nav>
    </header>
    <main class="page-shell">
