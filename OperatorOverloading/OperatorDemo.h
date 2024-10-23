#pragma once
#include <iostream>

class Vector {
public:
    // Constructor
    Vector(double x = 0, double y = 0);

    // Overloaded addition operator
    Vector operator+(const Vector& other) const;

    // Overloaded subtraction operator
    Vector operator-(const Vector& other) const;

    // Overloaded output stream operator
    friend std::ostream& operator<<(std::ostream& os, const Vector& vec);

private:
    double x; // x component
    double y; // y component
};
