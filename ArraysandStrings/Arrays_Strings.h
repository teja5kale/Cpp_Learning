#pragma once
#include <vector>
#include <string>

class ArrayString {
public:
    void getStrings(); // Collect user input for strings
    void sortStrings(); // Sort the strings in ascending order
    void displayStrings(); // Display the original and concatenated strings

private:
    std::vector<std::string> strings; // Store user input strings
    std::string concatenateStrings(); // Helper to concatenate strings
};
