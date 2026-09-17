<?php
/**
 * Book.php
 * Represents a single book in the library.
 */
class Book
{
    private string $title;
    private string $author;
    private string $isbn;

    /**
     * Constructor – initializes the three properties.
     *
     * @param string $title
     * @param string $author
     * @param string $isbn
     */
    public function __construct(string $title, string $author, string $isbn)
    {
        $this->setTitle($title);
        $this->setAuthor($author);
        $this->setISBN($isbn);
    }

    // ---------- Getters ----------
    public function getTitle(): string { return $this->title; }
    public function getAuthor(): string { return $this->author; }
    public function getISBN(): string { return $this->isbn; }

    // ---------- Setters with validation ----------
    public function setTitle(string $title): void
    {
        $title = trim($title);
        if ($title === '') {
            throw new InvalidArgumentException('Title cannot be empty.');
        }
        $this->title = $title;
    }

    public function setAuthor(string $author): void
    {
        $author = trim($author);
        if ($author === '') {
            throw new InvalidArgumentException('Author cannot be empty.');
        }
        $this->author = $author;
    }

    public function setISBN(string $isbn): void
    {
        $isbn = trim($isbn);
        if ($isbn === '') {
            throw new InvalidArgumentException('ISBN cannot be empty.');
        }
        $this->isbn = $isbn;
    }
}
?>