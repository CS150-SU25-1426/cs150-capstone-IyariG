#include "Book.h"

int Book::lastID = 0;

Book::Book() : mId(++lastID), mTitle(""), mQuantity(0) {}

Book::Book(const std::string& title, int quantity)
    : mId(++lastID), mTitle(title), mQuantity(quantity) {}

// Getters
int Book::getId() const { return mId; }
std::string Book::getTitle() const { return mTitle; }
int Book::getQuantity() const { return mQuantity; }

// Setters
void Book::setTitle(const std::string& title) { mTitle = title; }
void Book::setQuantity(int quantity) { mQuantity = quantity; }

// Operators
bool Book::operator==(const Book& other) const {
    return mTitle == other.mTitle && mQuantity == other.mQuantity;
}

std::ostream& operator<<(std::ostream& os, const Book& b) {
    os << "Book [ID#" << b.mId << ", Title=\"" << b.mTitle << "\", Quantity=" << b.mQuantity << "]";
    return os;
}
