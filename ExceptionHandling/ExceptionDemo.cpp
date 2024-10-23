#include "ExceptionDemo.h"

ExceptionDemo::ExceptionDemo() {}

double ExceptionDemo::performDivision(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Error: Division by zero is not allowed.");
    }
    return static_cast<double>(numerator) / denominator;
}

void ExceptionDemo::getInput(int& numerator, int& denominator) {
    std::cout << "Enter the numerator: ";
    std::string inputNum, inputDenom;

    std::cin >> inputNum;
    std::cout << "Enter the denominator: ";
    std::cin >> inputDenom;

    try {
        numerator = std::stoi(inputNum);
        denominator = std::stoi(inputDenom);
    }
    catch (const std::invalid_argument&) {
        throw InvalidInputException();
    }
}
