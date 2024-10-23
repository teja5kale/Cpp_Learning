#include "OperatorDemo.h"

// Constructor to initialize vector components
Vector::Vector(double x, double y) : x(x), y(y) {}

// Overloaded addition operator
Vector Vector::operator+(const Vector& other) const {
    return Vector(x + other.x, y + other.y);
}

// Overloaded subtraction operator
Vector Vector::operator-(const Vector& other) const {
    return Vector(x - other.x, y - other.y);
}

// Overloaded output stream operator
std::ostream& operator<<(std::ostream& os, const Vector& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}
