#include "Sorting_Searching.h"
#include <iostream>
#include <algorithm> 
#include <stdexcept> 
#include <string>

using namespace std;

void SortingSearching::getInput() {
    cout << "Enter integers (type 'q' to quit): " << endl;
    while (true) {
        cout << "> ";
        string input;
        cin >> input;

        if (input == "q" || input == "Q") {
            break;
        }

        try {
            int number = std::stoi(input); 
            numbers.push_back(number); 
        }
        catch (const std::invalid_argument&) {
            cout << "Invalid input. Please enter an integer." << endl;
        }
    }
}

void SortingSearching::sortArray() {
    sortedNumbers = numbers; 
    sort(sortedNumbers.begin(), sortedNumbers.end()); 
}

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
