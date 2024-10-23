#pragma once
#include <vector>
#include <string>

class IOLoop {
public:
    void getInput(); // Collect user input
    void calculateStatistics(); // Perform calculations on the input numbers
    void displayResults(); // Display the results of the calculations

private:
    std::vector<int> numbers; // Store user input
    int sum; // Store the sum of the numbers
    int positiveCount; // Store count of positive numbers
    int negativeCount; // Store count of negative numbers
    int zeroCount; // Store count of zeroes

    void clearData(); // Helper to reset data
    void reverseNumbers(); // Display numbers in reverse order
};
