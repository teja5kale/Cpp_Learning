#include "SmartPointerDemo.h"

// Constructor to initialize pointers
SmartPointerDemo::SmartPointerDemo(int value, const std::vector<int>& values) {
    uniquePtr = std::make_unique<int>(value); // Initialize unique_ptr
    sharedPtr = std::make_shared<std::vector<int>>(values); // Initialize shared_ptr
}

// Method to display the value of the unique pointer
void SmartPointerDemo::displayUniquePointer() const {
    std::cout << "Value managed by unique pointer: " << *uniquePtr << std::endl;
}

// Method to display the values of the shared pointer
void SmartPointerDemo::displaySharedPointer() const {
    std::cout << "Values managed by shared pointer: ";
    for (const auto& val : *sharedPtr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
