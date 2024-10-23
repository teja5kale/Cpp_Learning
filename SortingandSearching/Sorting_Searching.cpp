#include "Sorting_Searching.h"
#include <iostream>
#include <algorithm> // for sort()
#include <stdexcept> // for std::invalid_argument
#include <string>

using namespace std;

// Function to collect user input for integers
void SortingSearching::getInput() {
    cout << "Enter integers (type 'q' to quit): " << endl;
    while (true) {
        cout << "> ";
        string input;
        cin >> input;

        // Check if user wants to quit
        if (input == "q" || input == "Q") {
            break;
        }

        // Validate input
        try {
            int number = std::stoi(input); // Convert to integer
            numbers.push_back(number); // Store the integer
        }
        catch (const std::invalid_argument&) {
            cout << "Invalid input. Please enter an integer." << endl;
        }
    }
}

// Function to sort the array
void SortingSearching::sortArray() {
    sortedNumbers = numbers; // Copy original numbers to sortedNumbers
    sort(sortedNumbers.begin(), sortedNumbers.end()); // Sort the array
}

// Function to perform linear search
void SortingSearching::linearSearch(int key) {
    bool found = false;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == key) {
            cout << "Linear Search: " << key << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Linear Search: " << key << " not found." << endl;
    }
}

// Function to perform binary search
void SortingSearching::binarySearch(int key) {
    int left = 0;
    int right = sortedNumbers.size() - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (sortedNumbers[mid] == key) {
            cout << "Binary Search: " << key << " found at index " << mid << endl;
            found = true;
            break;
        }
        else if (sortedNumbers[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if (!found) {
        cout << "Binary Search: " << key << " not found." << endl;
    }
}

// Function to display original and sorted arrays
void SortingSearching::displayArrays() {
    cout << "\nOriginal Numbers:" << endl;
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << "\n\nSorted Numbers:" << endl;
    for (const auto& num : sortedNumbers) {
        cout << num << " ";
    }
    cout << endl;
}
