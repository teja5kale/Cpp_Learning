#include "CopyDemo.h"

int main() {
    int num;
    std::string str;

    // Get user input
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore newline character left in the buffer
    std::getline(std::cin, str);

    // Create an object using the default constructor
    CopyDemo original(num, str);

    // Display original object
    std::cout << "Original Object: ";
    original.display();

    // Create a copy using the copy constructor
    CopyDemo copy = original;

    // Display copied object
    std::cout << "Copied Object: ";
    copy.display();

    return 0;
}
