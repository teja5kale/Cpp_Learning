#include "io_loops.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for reverse()

using namespace std;

// Function to collect user input
void IOLoop::getInput() {
    clearData(); // Reset the data
    std::cout << "Enter integers (type 'q' to quit): " << std::endl;

    while (true) {
        std::cout << "> ";
        std::string input;
        std::cin >> input;

        // Check if user wants to quit
        if (input == "q" || input == "Q") {
            break;
        }

        // Validate and store input
        try {
            int number = std::stoi(input); // Convert string to integer
            numbers.push_back(number); // Store the number
        }
        catch (const std::invalid_argument&) {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        }
    }
}

// Function to perform calculations on the input numbers
void IOLoop::calculateStatistics() {
    sum = 0;
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (int number : numbers) {
        sum += number;
        if (number > 0) {
            positiveCount++;
        }
        else if (number < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}

// Function to display the results of the calculations
void IOLoop::displayResults() {
    std::cout << "\nResults:" << std::endl;
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Positive numbers count: " << positiveCount << std::endl;
    std::cout << "Negative numbers count: " << negativeCount << std::endl;
    std::cout << "Zeroes count: " << zeroCount << std::endl;

    std::cout << "\nOriginal numbers: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    reverseNumbers(); // Display the reversed numbers
}

// Helper function to reset data
void IOLoop::clearData() {
    numbers.clear();
    sum = 0;
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;
}

// Helper function to display numbers in reverse order
void IOLoop::reverseNumbers() {
    std::cout << "\nReversed numbers: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
