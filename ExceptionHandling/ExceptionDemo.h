#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

class ExceptionDemo {
public:
   
    ExceptionDemo();

    double performDivision(int numerator, int denominator);

    void getInput(int& numerator, int& denominator);

    class InvalidInputException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Invalid input! Only integers are allowed.";
        }
    };
};
