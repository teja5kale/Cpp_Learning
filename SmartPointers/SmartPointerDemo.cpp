#include "SmartPointerDemo.h"

SmartPointerDemo::SmartPointerDemo(int value, const std::vector<int>& values) {
    uniquePtr = std::make_unique<int>(value); 
    sharedPtr = std::make_shared<std::vector<int>>(values); 
}

void SmartPointerDemo::displayUniquePointer() const {
    std::cout << "Value managed by unique pointer: " << *uniquePtr << std::endl;
}

void SmartPointerDemo::displaySharedPointer() const {
    std::cout << "Values managed by shared pointer: ";
    for (const auto& val : *sharedPtr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
