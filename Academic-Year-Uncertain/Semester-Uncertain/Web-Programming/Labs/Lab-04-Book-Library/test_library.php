<?php
require_once 'Library.php';

$library = new Library();

// Create books
$book1 = new Book('Clean Code', 'Robert C. Martin', '978-0132350884');
$book2 = new Book('The Pragmatic Programmer', 'Andrew Hunt & David Thomas', '978-0201616224');
$book3 = new Book('Design Patterns', 'Erich Gamma et al.', '978-0201633610');

// Add to library
$library->addBook($book1);
$library->addBook($book2);
$library->addBook($book3);

?>

<!DOCTYPE html>
<html>
<head>
    <title>Library Test</title>
    <style>
        body { font-family: Arial; margin: 40px; }
        li { margin: 10px 0; }
    </style>
</head>
<body>
    <h2>Library Contents</h2>
    <ul>
        <?php foreach ($library->getBooks() as $book): ?>
            <li>
                <strong><?php echo htmlspecialchars($book->getTitle()); ?></strong><br>
                by <?php echo htmlspecialchars($book->getAuthor()); ?><br>
                <small>ISBN: <?php echo htmlspecialchars($book->getISBN()); ?></small>
            </li>
        <?php endforeach; ?>
    </ul>
</body>
</html>