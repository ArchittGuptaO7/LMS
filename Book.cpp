#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    // Constructor
    Book(std::string t, std::string a, int year) {
        title = t;
        author = a;
        publicationYear = year;
    }

    // Getters
    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    // Method to display book details
    void display() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
    }
};

int main() {
    Book book1("Effective C++", "Scott Meyers", 2005);
    book1.display();
    return 0;
}