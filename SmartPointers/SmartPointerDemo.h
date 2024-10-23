#pragma once
#include <iostream>
#include <memory>
#include <vector>

class SmartPointerDemo {
public:
    // Constructor
    SmartPointerDemo(int value, const std::vector<int>& values);

    // Method to display the value of the unique pointer
    void displayUniquePointer() const;

    // Method to display the values of the shared pointer
    void displaySharedPointer() const;

private:
    std::unique_ptr<int> uniquePtr;         // Unique pointer
    std::shared_ptr<std::vector<int>> sharedPtr; // Shared pointer to a vector
};
