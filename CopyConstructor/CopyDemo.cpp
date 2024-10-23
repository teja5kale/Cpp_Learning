#include "CopyDemo.h"

CopyDemo::CopyDemo(int num, const std::string& str)
    : number(num), text(str) {}

CopyDemo::CopyDemo(const CopyDemo& other)
    : number(other.number), text(other.text) {}

void CopyDemo::display() const {
    std::cout << "Number: " << number << ", Text: " << text << std::endl;
}
