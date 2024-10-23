#include "io_loops.h"
#include <iostream>

int main() {
    IOLoop ioLoop;
    char choice;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Enter integers\n";
        std::cout << "2. Calculate and display statistics\n";
        std::cout << "3. Exit\n";
        std::cout << "> ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            ioLoop.getInput();
            break;
        case '2':
            ioLoop.calculateStatistics();
            ioLoop.displayResults();
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
