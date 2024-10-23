#pragma once
#include <iostream>

class Vector {
public:
   
    Vector(double x = 0, double y = 0);

    Vector operator+(const Vector& other) const;

    Vector operator-(const Vector& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Vector& vec);

private:
    double x; 
    double y; 
};
