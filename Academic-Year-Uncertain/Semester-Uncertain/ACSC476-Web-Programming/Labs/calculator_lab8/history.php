<?php
require_once __DIR__ . '/includes/init.php';
require_login();
include __DIR__ . '/includes/header.php';
?>

<section class="panel">
    <div class="glass card lift">
        <div class="card-head">
            <div class="eyebrow">History</div>
            <h1>Previous calculations</h1>
            <p class="muted">Tap any entry to reopen it in the calculator without retyping. Your recent math stays with you.</p>
        </div>
        <div class="history">
            <div class="history-list muted"></div>
        </div>
        <div class="badge subtle">Tip: History stays in your browser (localStorage).</div>
    </div>
</section>

<?php include __DIR__ . '/includes/footer.php'; ?>
