<?php
require_once __DIR__ . '/includes/init.php';
require_login();
include __DIR__ . '/includes/header.php';
?>

<section class="panel two-col">
    <div class="glass card lift">
        <div class="card-head">
            <div class="eyebrow">Calculator</div>
            <h1>Glide through your calculations</h1>
            <p class="muted">Type or tap to build expressions, then hit enter. Soft gradients, crisp contrast, and instant feedback keep you focused.</p>
        </div>
        <div class="calc-wrap">
            <input class="calc-screen" type="text" inputmode="decimal" placeholder="e.g. 42 / 7 + 3 * (5 - 1)" />
            <div class="key-grid">
                <?php
                $keys = [
                    '7','8','9','/',
                    '4','5','6','*',
                    '1','2','3','-',
                    '0','.','(',')',
                ];
                foreach ($keys as $key): ?>
                    <button type="button" class="soft-btn" data-key="<?= $key ?>"><?= $key ?></button>
                <?php endforeach; ?>
            </div>
            <div class="key-row">
                <button type="button" class="ghost-btn" data-backspace>⌫</button>
                <button type="button" class="ghost-btn" data-clear>Clear</button>
                <button type="button" class="primary" data-submit>=</button>
            </div>
            <div class="result-notice muted"></div>
        </div>
    </div>
    <div class="glass card">
        <div class="card-head">
            <div class="eyebrow">Tips</div>
            <h2>Shortcuts & flow</h2>
            <ul class="list">
                <li>Press Enter to evaluate instantly.</li>
                <li>Use parentheses to control order of operations.</li>
                <li>Backspace removes the last character, Clear resets the field.</li>
                <li>Stay signed in to hop between Calculator and About seamlessly.</li>
            </ul>
            <div class="badge">Logged in as <?= htmlspecialchars(current_user() ?? 'you'); ?></div>
            <div class="history">
                <h3 class="history-title">Previous calculations</h3>
                <p class="muted small">Tap any expression to load it back into the calculator.</p>
                <div class="history-list muted"></div>
            </div>
        </div>
    </div>
</section>

<?php include __DIR__ . '/includes/footer.php'; ?>
