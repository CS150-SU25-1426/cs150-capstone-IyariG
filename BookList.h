#ifndef BOOKLIST_H
#define BOOKLIST_H

#include "Book.h"
#include <vector>
#include <iostream>

class BookList {
private:
    std::vector<Book> mList;

public:
    void addBook(const Book& book);
    bool removeBook(int id);
    bool editBook(int id, int newQuantity);
    void showAllBooks() const;

    // Operators
    bool operator==(const BookList& other) const;
    friend std::ostream& operator<<(std::ostream& os, const BookList& list);
};

#endif
