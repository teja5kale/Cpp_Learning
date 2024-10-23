#pragma once
#include <iostream>
#include <string>

class CopyDemo {
public:
    // Default constructor
    CopyDemo(int num, const std::string& str);

    // Copy constructor
    CopyDemo(const CopyDemo& other);

    // Method to display member values
    void display() const;

private:
    int number;          // Integer member variable
    std::string text;    // String member variable
};
