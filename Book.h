#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    static int lastID;
    int mId;
    std::string mTitle;
    int mQuantity;

public:
    Book();
    Book(const std::string& title, int quantity);

    // Getters
    int getId() const;
    std::string getTitle() const;
    int getQuantity() const;

    // Setters
    void setTitle(const std::string& title);
    void setQuantity(int quantity);

    // Operators
    bool operator==(const Book& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Book& b);
};

#endif
