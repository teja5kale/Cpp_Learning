#pragma once
#include <iostream>
#include <memory>
#include <vector>

class SmartPointerDemo {
public:

    SmartPointerDemo(int value, const std::vector<int>& values);

    void displayUniquePointer() const;

    void displaySharedPointer() const;

private:
    std::unique_ptr<int> uniquePtr;         
    std::shared_ptr<std::vector<int>> sharedPtr; 
};
