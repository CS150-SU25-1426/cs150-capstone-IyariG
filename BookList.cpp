#include "BookList.h"

void BookList::addBook(const Book& book) {
    mList.push_back(book);
    std::cout << "Added: " << book << "\n";
}

bool BookList::removeBook(int id) {
    for (auto it = mList.begin(); it != mList.end(); ++it) {
        if (it->getId() == id) {
            std::cout << "Removed: " << *it << "\n";
            mList.erase(it);
            return true;
        }
    }
    return false;
}

bool BookList::editBook(int id, int newQuantity) {
    for (auto& book : mList) {
        if (book.getId() == id) {
            book.setQuantity(newQuantity);
            std::cout << "Updated: " << book << "\n";
            return true;
        }
    }
    return false;
}

void BookList::showAllBooks() const {
    if (mList.empty()) {
        std::cout << "No books in inventory.\n";
        return;
    }
    std::cout << "\nCurrent Book Inventory:\n";
    for (const auto& book : mList) {
        std::cout << book << "\n";
    }
}

bool BookList::operator==(const BookList& other) const {
    return mList == other.mList;
}

std::ostream& operator<<(std::ostream& os, const BookList& list) {
    for (const auto& book : list.mList) {
        os << book << "\n";
    }
    return os;
}
