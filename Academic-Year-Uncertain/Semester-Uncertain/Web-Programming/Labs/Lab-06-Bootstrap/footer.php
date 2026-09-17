</div>

<!-- Toast Container -->
<div class="toast-container">
    <div class="toast align-items-center text-bg-success border-0" id="successToast">
        <div class="d-flex">
            <div class="toast-body">
                <i class="bi bi-check-circle"></i> Mission added successfully!
            </div>
            <button type="button" class="btn-close btn-close-white" data-bs-dismiss="toast"></button>
        </div>
    </div>
</div>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"></script>
<script>
    document.addEventListener('DOMContentLoaded', () => {
        const urlParams = new URLSearchParams(window.location.search);
        if (urlParams.get('added') === '1') {
            const toast = new bootstrap.Toast(document.getElementById('successToast'));
            toast.show();
        }
    });
</script>
</body>
</html>