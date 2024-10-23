#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class TemplateSort {
public:
    // Constructor
    TemplateSort(int size);

    // Method to get user input
    void getInput();

    // Method to sort the array
    void sortArray();

    // Method to display the sorted array
    void displayArray() const;

private:
    std::vector<T> elements; // Vector to store elements
};
