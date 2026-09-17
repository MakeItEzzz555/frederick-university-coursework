<?php
session_start();

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $title = trim($_POST['title'] ?? '');
    $commander = trim($_POST['commander'] ?? '');
    $launch = $_POST['launch'] ?? '';
    $status = $_POST['status'] ?? '';

    if (empty($title) || empty($commander) || empty($launch)) {
        $error = "All fields are required.";
    } else {
        $newMission = [
            'title' => $title,
            'commander' => $commander,
            'launch' => $launch,
            'status' => $status,
            'image' => 'https://via.placeholder.com/600x400?text=New+Mission',
            'desc' => 'User-submitted mission.'
        ];

        if (!isset($_SESSION['custom_missions'])) {
            $_SESSION['custom_missions'] = [];
        }
        $_SESSION['custom_missions'][] = $newMission;

        header("Location: index.php?added=1");
        exit;
    }
}
?>