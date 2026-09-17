<?php
/**
 * Library.php
 * Holds a collection of Book objects.
 */
require_once 'Book.php';

class Library
{
    /** @var Book[] */
    private array $books = [];

    /**
     * Adds a Book instance to the library.
     *
     * @param Book $book
     */
    public function addBook(Book $book): void
    {
        $this->books[] = $book;
    }

    /**
     * Returns a copy of the internal books array.
     *
     * @return Book[]
     */
    public function getBooks(): array
    {
        return $this->books;
    }
}
?>