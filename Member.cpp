#include <iostream>

class Member {
private:
    std::string name;
    int id;

public:
    Member(std::string n, int i) : name(n), id(i) {}
    void displayInfo() {
        std::cout << "Name: " << name << ", ID: " << id << std::endl;
    }
};
