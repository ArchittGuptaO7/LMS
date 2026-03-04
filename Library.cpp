// Library.cpp

#include <iostream>
#include <string>
#include <vector>

class Book {
public:
    std::string title;
    std::string author;
    bool isAvailable;

    Book(std::string t, std::string a) : title(t), author(a), isAvailable(true) {}
};

class Library {
    std::vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() {
        for (const auto& book : books) {
            std::cout << "Title: " << book.title << ", Author: " << book.author << ", Available: " << (book.isAvailable ? "Yes" : "No") << std::endl;
        }
    }
};

int main() {
    Library myLibrary;
    myLibrary.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));
    myLibrary.addBook(Book("1984", "George Orwell"));
    myLibrary.displayBooks();
    return 0;
}