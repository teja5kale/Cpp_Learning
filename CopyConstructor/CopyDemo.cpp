#include "CopyDemo.h"

// Default constructor
CopyDemo::CopyDemo(int num, const std::string& str)
    : number(num), text(str) {}

// Copy constructor
CopyDemo::CopyDemo(const CopyDemo& other)
    : number(other.number), text(other.text) {}

// Method to display member values
void CopyDemo::display() const {
    std::cout << "Number: " << number << ", Text: " << text << std::endl;
}
