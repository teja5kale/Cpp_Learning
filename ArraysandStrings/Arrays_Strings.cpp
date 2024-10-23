#include "Arrays_Strings.h"

#include <iostream>
#include <string>
#include <algorithm> // for sort()

using namespace std;

// Function to collect user input for strings
void ArrayString::getStrings() {
    std::cout << "Enter strings (type 'q' to quit): " << std::endl;
    while (true) {
        std::cout << "> ";
        std::string input;
        std::getline(std::cin, input); // Using getline to allow spaces

        // Check if user wants to quit
        if (input == "q" || input == "Q") {
            break;
        }

        strings.push_back(input); // Store the string
    }
}

// Function to sort the strings in ascending order
void ArrayString::sortStrings() {
    std::sort(strings.begin(), strings.end()); // Sort strings
}

// Function to display the original strings and concatenated result
void ArrayString::displayStrings() {
    std::cout << "\nOriginal Strings:" << std::endl;
    for (const auto& str : strings) {
        std::cout << str << std::endl; // Display each string
    }

    std::string concatenated = concatenateStrings(); // Get concatenated string
    std::cout << "\nConcatenated String: " << concatenated << std::endl; // Display concatenated string
}

// Helper function to concatenate all strings
std::string ArrayString::concatenateStrings() {
    std::string result;
    for (const auto& str : strings) {
        result += str + " "; // Add space between concatenated strings
    }
    return result; // Return concatenated result
}
