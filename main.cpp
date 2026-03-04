#include <iostream>
#include <cstdlib>

using namespace std;

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Option 1\n";
    cout << "2. Option 2\n";
    cout << "3. Exit\n";
}

int main() {
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "You selected Option 1\n";
                break;
            case 2:
                cout << "You selected Option 2\n";
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);
    return 0;
}