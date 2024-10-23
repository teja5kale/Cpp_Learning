#pragma once
#include <vector>

class SortingSearching {
public:
    void getInput(); // Collect user input for integers
    void sortArray(); // Sort the array
    void linearSearch(int key); // Perform linear search
    void binarySearch(int key); // Perform binary search
    void displayArrays(); // Display original and sorted arrays

private:
    std::vector<int> numbers; // Store user input integers
    std::vector<int> sortedNumbers; // Store sorted integers
};

