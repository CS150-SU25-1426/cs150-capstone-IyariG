#include <iostream>
#include "BookList.h"

int main() {
    BookList inventory;
    int choice = 0;

    do {
        std::cout << "\n=== Book Inventory Menu ===\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Remove Book\n";
        std::cout << "3. Edit Book Quantity\n";
        std::cout << "4. Show All Books\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string title;
            int quantity;

            std::cout << "Enter Book Title: ";
            std::getline(std::cin, title);
            std::cout << "Enter Quantity: ";
            std::cin >> quantity;
            std::cin.ignore();

            Book book(title, quantity);
            inventory.addBook(book);

        } else if (choice == 2) {
            int id;
            std::cout << "Enter Book ID to Remove: ";
            std::cin >> id;
            std::cin.ignore();

            if (!inventory.removeBook(id)) {
                std::cout << "Book with ID " << id << " not found.\n";
            }

        } else if (choice == 3) {
            int id, newQuantity;
            std::cout << "Enter Book ID to Edit: ";
            std::cin >> id;
            std::cout << "Enter New Quantity: ";
            std::cin >> newQuantity;
            std::cin.ignore();

            if (!inventory.editBook(id, newQuantity)) {
                std::cout << "Book with ID " << id << " not found.\n";
            }

        } else if (choice == 4) {
            inventory.showAllBooks();

        } else if (choice == 5) {
            std::cout << "Goodbye!\n";
        } else {
            std::cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
