#include "CopyDemo.h"

int main() {
    int num;
    std::string str;

    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Enter a string: ";
    std::cin.ignore(); 
    std::getline(std::cin, str);

    CopyDemo original(num, str);

    std::cout << "Original Object: ";
    original.display();

    CopyDemo copy = original;

    std::cout << "Copied Object: ";
    copy.display();

    return 0;
}
