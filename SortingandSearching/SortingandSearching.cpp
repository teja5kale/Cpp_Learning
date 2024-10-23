#include "Sorting_Searching.h"
#include <iostream>

int main() {
    SortingSearching ss;
    char choice;

    ss.getInput();
    ss.sortArray();

    while (true) {
        ss.displayArrays();
        std::cout << "\nMenu:\n";
        std::cout << "1. Linear Search\n";
        std::cout << "2. Binary Search\n";
        std::cout << "3. Exit\n";
        std::cout << "> ";
        std::cin >> choice;

        if (choice == '3') {
            std::cout << "Exiting program." << std::endl;
            break;
        }

        int key;
        std::cout << "Enter number to search: ";
        std::cin >> key;

        switch (choice) {
        case '1':
            ss.linearSearch(key);
            break;
        case '2':
            ss.binarySearch(key);
            break;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
