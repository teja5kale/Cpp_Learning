#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

class ExceptionDemo {
public:
    // Constructor
    ExceptionDemo();

    // Method to perform division with exception handling
    double performDivision(int numerator, int denominator);

    // Method to get user input for numerator and denominator
    void getInput(int& numerator, int& denominator);

    // Custom exception for invalid input
    class InvalidInputException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Invalid input! Only integers are allowed.";
        }
    };
};
