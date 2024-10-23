#include "io_loops.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

void IOLoop::getInput() {
    clearData(); 
    std::cout << "Enter integers (type 'q' to quit): " << std::endl;

    while (true) {
        std::cout << "> ";
        std::string input;
        std::cin >> input;

        if (input == "q" || input == "Q") {
            break;
        }

        try {
            int number = std::stoi(input); 
            numbers.push_back(number); 
        }
        catch (const std::invalid_argument&) {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        }
    }
}

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

    reverseNumbers(); 
}

void IOLoop::clearData() {
    numbers.clear();
    sum = 0;
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;
}

void IOLoop::reverseNumbers() {
    std::cout << "\nReversed numbers: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
