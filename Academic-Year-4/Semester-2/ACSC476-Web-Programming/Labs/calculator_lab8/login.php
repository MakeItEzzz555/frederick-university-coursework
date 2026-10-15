<?php
require_once __DIR__ . '/includes/init.php';

if (is_logged_in()) {
    header('Location: calculator.php');
    exit;
}

$error = '';
$info = '';

if (isset($_GET['msg']) && $_GET['msg'] === 'login') {
    $info = 'Please log in to access the calculator.';
}

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $username = trim($_POST['username'] ?? '');
    $password = trim($_POST['password'] ?? '');

    $validUser = 'student';
    $validPass = 'lab8pass';

    if ($username === $validUser && $password === $validPass) {
        $_SESSION['user'] = ['name' => 'Lab 8 Student', 'username' => $username];
        header('Location: calculator.php');
        exit;
    }

    $error = 'Invalid credentials. Try student / lab8pass.';
}

include __DIR__ . '/includes/header.php';
?>

<section class="panel center">
    <div class="glass card">
        <div class="card-head">
            <div class="eyebrow">Welcome back</div>
            <h1>Log in to crunch numbers</h1>
            <p class="muted">Securely access the Lab 8 calculator and glide through your course work.</p>
        </div>
        <?php if ($info): ?>
            <div class="alert info"><?= htmlspecialchars($info) ?></div>
        <?php endif; ?>
        <?php if ($error): ?>
            <div class="alert error"><?= htmlspecialchars($error) ?></div>
        <?php endif; ?>
        <form class="stack" method="post" action="login.php">
            <label class="field">
                <span>Username</span>
                <input type="text" name="username" autocomplete="username" required placeholder="student" />
            </label>
            <label class="field">
                <span>Password</span>
                <input type="password" name="password" autocomplete="current-password" required placeholder="lab8pass" />
            </label>
            <button type="submit" class="primary expand">Enter</button>
        </form>
        <div class="hint muted">Use student / lab8pass to sign in.</div>
    </div>
</section>

<?php include __DIR__ . '/includes/footer.php'; ?>
