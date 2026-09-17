<?php
require_once __DIR__ . '/includes/init.php';

if (is_logged_in()) {
    header('Location: calculator.php');
    exit;
}

header('Location: login.php');
exit;
