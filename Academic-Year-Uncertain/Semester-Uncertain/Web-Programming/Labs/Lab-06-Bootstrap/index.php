<?php
require_once 'missions.php';
session_start();
$allMissions = array_merge($missions, $_SESSION['custom_missions'] ?? []);
include 'header.php';
?>

<!-- 1. Breadcrumb -->
<nav aria-label="breadcrumb" class="section">
    <ol class="breadcrumb">
        <li class="breadcrumb-item"><a href="#" class="text-light">Home</a></li>
        <li class="breadcrumb-item active text-warning">Mission Control</li>
    </ol>
</nav>

<!-- 2. Alert -->
<div class="alert alert-warning alert-dismissible fade show section" role="alert">
    <strong>System Online</strong> — All systems operational. <code><?= count($allMissions) ?></code> missions loaded.
    <button class="btn-close" data-bs-dismiss="alert"></button>
</div>

<!-- 3. Buttons + Dropdown -->
<div class="section text-center">
    <button class="btn btn-success btn-lg me-3" data-bs-toggle="modal" data-bs-target="#addMissionModal">
        <i class="bi bi-plus-circle"></i> Launch New Mission
    </button>
    <div class="btn-group">
        <button class="btn btn-outline-light dropdown-toggle" data-bs-toggle="dropdown">
            <i class="bi bi-gear"></i> Actions
        </button>
        <ul class="dropdown-menu dropdown-menu-dark">
            <li><a class="dropdown-item" href="#">Export Report</a></li>
            <li><a class="dropdown-item" href="#">Sync with NASA</a></li>
            <li><hr class="dropdown-divider"></li>
            <li><a class="dropdown-item text-danger" href="#">Emergency Shutdown</a></li>
        </ul>
    </div>
</div>

<!-- 4. Cards (Grid System) -->
<div class="section">
    <h3 class="text-center text-info mb-4"><i class="bi bi-grid-3x3-gap"></i> Active Missions</h3>
    <div class="row row-cols-1 row-cols-md-3 g-4">
        <?php foreach (array_slice($allMissions, 0, 6) as $m): ?>
        <div class="col">
            <div class="card h-100 text-light">
                <img src="<?= $m['image'] ?>" class="card-img-top" alt="<?= $m['title'] ?>">
                <div class="card-body">
                    <h5 class="card-title"><?= htmlspecialchars($m['title']) ?></h5>
                    <p class="card-text"><?= htmlspecialchars($m['desc']) ?></p>
                    <p><strong>Commander:</strong> <?= htmlspecialchars($m['commander']) ?></p>
                    <span class="badge bg-<?= $m['status']=='Active'?'success':($m['status']=='Planned'?'warning':'secondary') ?>">
                        <?= $m['status'] ?>
                    </span>
                </div>
            </div>
        </div>
        <?php endforeach; ?>
    </div>
</div>

<!-- 5. Carousel -->
<div class="section">
    <h3 class="text-center text-cyan mb-4"><i class="bi bi-images"></i> Mission Gallery</h3>
    <div id="missionCarousel" class="carousel slide">
        <div class="carousel-inner">
            <?php foreach (array_slice($allMissions, 0, 3) as $i => $m): ?>
            <div class="carousel-item <?= $i===0?'active':'' ?>">
                <img src="<?= $m['image'] ?>" class="d-block w-100" alt="<?= $m['title'] ?>">
                <div class="carousel-caption d-none d-md-block">
                    <h5><?= $m['title'] ?></h5>
                    <p><?= $m['desc'] ?></p>
                </div>
            </div>
            <?php endforeach; ?>
        </div>
        <button class="carousel-control-prev" data-bs-target="#missionCarousel" data-bs-slide="prev">
            <span class="carousel-control-prev-icon"></span>
        </button>
        <button class="carousel-control-next" data-bs-target="#missionCarousel" data-bs-slide="next">
            <span class="carousel-control-next-icon"></span>
        </button>
    </div>
</div>

<!-- 6. Form + 7. Modal -->
<div class="modal fade" id="addMissionModal" tabindex="-1">
    <div class="modal-dialog modal-lg">
        <form method="post" action="add_mission.php">
            <div class="modal-content bg-dark text-light">
                <div class="modal-header border-0">
                    <h5 class="modal-title"><i class="bi bi-rocket"></i> Launch New Mission</h5>
                    <button type="button" class="btn-close btn-close-white" data-bs-dismiss="modal"></button>
                </div>
                <div class="modal-body">
                    <?php if (isset($error)): ?>
                        <div class="alert alert-danger"><?= htmlspecialchars($error) ?></div>
                    <?php endif; ?>
                    <div class="row">
                        <div class="col-md-6 mb-3">
                            <label class="form-label">Mission Title</label>
                            <input type="text" name="title" class="form-control" required>
                        </div>
                        <div class="col-md-6 mb-3">
                            <label class="form-label">Commander</label>
                            <input type="text" name="commander" class="form-control" required>
                        </div>
                        <div class="col-md-6 mb-3">
                            <label class="form-label">Launch Date</label>
                            <input type="date" name="launch" class="form-control" required>
                        </div>
                        <div class="col-md-6 mb-3">
                            <label class="form-label">Status</label>
                            <select name="status" class="form-select">
                                <option>Planned</option>
                                <option>Active</option>
                                <option>In Development</option>
                            </select>
                        </div>
                    </div>
                </div>
                <div class="modal-footer border-0">
                    <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Cancel</button>
                    <button type="submit" class="btn btn-success">Launch Mission</button>
                </div>
            </div>
        </form>
    </div>
</div>

<!-- 8. Pagination -->
<div class="section text-center">
    <nav>
        <ul class="pagination justify-content-center">
            <li class="page-item disabled"><a class="page-link" href="#">Previous</a></li>
            <li class="page-item active"><a class="page-link" href="#">1</a></li>
            <li class="page-item"><a class="page-link" href="#">2</a></li>
            <li class="page-item"><a class="page-link" href="#">Next</a></li>
        </ul>
    </nav>
</div>

<?php include 'footer.php'; ?>