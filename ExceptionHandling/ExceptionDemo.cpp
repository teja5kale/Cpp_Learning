#include "ExceptionDemo.h"

// Constructor
ExceptionDemo::ExceptionDemo() {}

// Method to perform division with exception handling
double ExceptionDemo::performDivision(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Error: Division by zero is not allowed.");
    }
    return static_cast<double>(numerator) / denominator;
}

// Method to get user input for numerator and denominator
void ExceptionDemo::getInput(int& numerator, int& denominator) {
    std::cout << "Enter the numerator: ";
    std::string inputNum, inputDenom;

    std::cin >> inputNum;
    std::cout << "Enter the denominator: ";
    std::cin >> inputDenom;

    // Try converting input to integers, else throw custom exception
    try {
        numerator = std::stoi(inputNum);
        denominator = std::stoi(inputDenom);
    }
    catch (const std::invalid_argument&) {
        throw InvalidInputException(); // Custom exception for invalid input
    }
}
