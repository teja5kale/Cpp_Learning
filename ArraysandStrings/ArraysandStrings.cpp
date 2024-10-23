#include "arrays_strings.h"
#include <iostream>

int main() {
    ArrayString arrayString;
    char choice;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Enter strings\n";
        std::cout << "2. Sort and display strings\n";
        std::cout << "3. Exit\n";
        std::cout << "> ";
        std::cin >> choice;
        std::cin.ignore(); // Clear newline character from buffer

        switch (choice) {
        case '1':
            arrayString.getStrings();
            break;
        case '2':
            arrayString.sortStrings();
            arrayString.displayStrings();
            break;
        case '3':
            std::cout << "Exiting program." << std::endl;
            return 0;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
