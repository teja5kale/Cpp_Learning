#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class LambdaDemo {
public:
    // Constructor
    LambdaDemo(const std::vector<int>& numbers);

    // Method to sort numbers using a lambda
    void sortNumbers();

    // Method to filter even numbers using a lambda
    void filterEvenNumbers();

    // Method to display numbers
    void displayNumbers() const;

private:
    std::vector<int> numbers; // Store the collection of numbers
};
