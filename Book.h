#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    int quantity;

public:
    Book();
    Book(std::string t, int q);

    std::string getTitle() const;
    int getQuantity() const;

    void setTitle(std::string t);
    void setQuantity(int q);

    friend std::ostream& operator<<(std::ostream& os, const Book& b);
    bool operator==(const Book& other) const;
};

#endif

