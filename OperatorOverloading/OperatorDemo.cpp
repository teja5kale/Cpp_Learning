#include "OperatorDemo.h"

Vector::Vector(double x, double y) : x(x), y(y) {}

Vector Vector::operator+(const Vector& other) const {
    return Vector(x + other.x, y + other.y);
}

Vector Vector::operator-(const Vector& other) const {
    return Vector(x - other.x, y - other.y);
}

std::ostream& operator<<(std::ostream& os, const Vector& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}
