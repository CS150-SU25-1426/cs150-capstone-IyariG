#include <iostream>
#include "Book.h"

Book::Book() : title(""), quantity(0) {}

Book::Book(std::string t, int q) : title(t), quantity(q) {}

std::string Book::getTitle() const {
    return title;
}

int Book::getQuantity() const {
    return quantity;
}

void Book::setTitle(std::string t) {
    title = t;
}

void Book::setQuantity(int q) {
    quantity = q;
}

std::ostream& operator<<(std::ostream& os, const Book& b) {
    os << "Book: " << b.title << ", Quantity: " << b.quantity;
    return os;
}

bool Book::operator==(const Book& other) const {
    return (title == other.title) && (quantity == other.quantity);
}

int main() {
    Book book1("Calculus", 12);
    Book book2("Physics", 7);
    Book book3("Calculus", 12);

    std::cout << book1 << std::endl;
    std::cout << book2 << std::endl;

    if (book1 == book3)
        std::cout << "book1 and book3 are the same." << std::endl;
    else
        std::cout << "book1 and book3 are different." << std::endl;

    if (book1 == book2)
        std::cout << "book1 and book2 are the same." << std::endl;
    else
        std::cout << "book1 and book2 are different." << std::endl;

    return 0;
}
