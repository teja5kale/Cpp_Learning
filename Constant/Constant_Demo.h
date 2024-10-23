#pragma once
#include <iostream>

class Constant_Demo {
private:
    const int constantValue; // Constant data member
    int variableValue;

public:
    // Constructor to initialize both values
    Constant_Demo(int cv, int vv);

    // Constant member function (does not modify any class member)
    void showConstant() const;

    // Non-constant member function (can modify non-constant members)
    void modifyVariable(int newValue);

    // Getter for non-constant member
    int getVariable() const;

    // Constant pointer function (pointer to constant object)
    void showWithConstantPointer(const Constant_Demo* const obj) const;
};
