<?php
require_once __DIR__ . '/includes/init.php';
require_login();
include __DIR__ . '/includes/header.php';
?>

<section class="panel two-col">
    <div class="glass card lift">
        <div class="card-head">
            <div class="eyebrow">About ACSC476</div>
            <h1>Web Programming · Lab 8</h1>
            <p class="muted">You’re building secure, smooth experiences with PHP and JavaScript—auth for access, and a delightful calculator UI.</p>
        </div>
        <div class="pill-list">
            <span class="pill">PHP Sessions</span>
            <span class="pill">Auth Guards</span>
            <span class="pill">Vanilla JS</span>
            <span class="pill">UI Animation</span>
        </div>
        <div class="text-block">
            <h3>Objectives</h3>
            <p>Practice session-based authentication, page-to-page navigation, and a polished front-end. The calculator runs client-side while PHP keeps access controlled.</p>
        </div>
        <div class="text-block">
            <h3>What’s inside</h3>
            <ul class="list">
                <li>Login page that gates the experience.</li>
                <li>Calculator with keyboard support and instant feedback.</li>
                <li>Soft, eye-friendly theme with micro-interactions.</li>
            </ul>
        </div>
    </div>
    <div class="glass card">
        <div class="card-head">
            <div class="eyebrow">Navigation</div>
            <h2>Stay in flow</h2>
            <p class="muted">Use the header links to switch between Calculator and About without losing your session.</p>
            <div class="cta-grid">
                <a class="primary" href="calculator.php">Open Calculator</a>
                <a class="ghost-btn" href="logout.php">Logout</a>
            </div>
            <div class="badge subtle">Logged in as <?= htmlspecialchars(current_user() ?? 'you'); ?></div>
        </div>
    </div>
</section>

<?php include __DIR__ . '/includes/footer.php'; ?>
