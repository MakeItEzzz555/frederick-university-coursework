<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Space Explorer Dashboard</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.3/font/bootstrap-icons.css" rel="stylesheet">
    <style>
        body { background: #0f0c29; color: #e0e0e0; padding-top: 70px; }
        .navbar { background: linear-gradient(90deg, #1a1a2e, #16213e); }
        .card { background: #16213e; border: 1px solid #0f3460; }
        .section { margin: 3rem 0; }
        .toast-container { position: fixed; top: 1rem; right: 1rem; z-index: 1100; }
        .carousel-item img { height: 400px; object-fit: cover; }
    </style>
</head>
<body>
<nav class="navbar navbar-expand-lg navbar-dark fixed-top">
    <div class="container-fluid">
        <a class="navbar-brand" href="index.php">
            <i class="bi bi-rocket-takeoff"></i> Space Explorer
        </a>
    </div>
</nav>
<div class="container">