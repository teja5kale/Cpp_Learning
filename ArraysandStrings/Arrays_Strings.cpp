#include "Arrays_Strings.h"

#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


void ArrayString::getStrings() {
    std::cout << "Enter strings (type 'q' to quit): " << std::endl;
    while (true) {
        std::cout << "> ";
        std::string input;
        std::getline(std::cin, input); 

        
        if (input == "q" || input == "Q") {
            break;
        }

        strings.push_back(input); 
    }
}

void ArrayString::sortStrings() {
    std::sort(strings.begin(), strings.end()); 
}

void ArrayString::displayStrings() {
    std::cout << "\nOriginal Strings:" << std::endl;
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    std::string concatenated = concatenateStrings();
    std::cout << "\nConcatenated String: " << concatenated << std::endl;
}

std::string ArrayString::concatenateStrings() {
    std::string result;
    for (const auto& str : strings) {
        result += str + " "; 
    }
    return result;
}
