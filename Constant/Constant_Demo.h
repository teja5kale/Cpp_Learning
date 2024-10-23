#pragma once
#include <iostream>

class Constant_Demo {
private:
    const int constantValue;
    int variableValue;

public:
    Constant_Demo(int cv, int vv);

    void showConstant() const;

    void modifyVariable(int newValue);

    int getVariable() const;

    void showWithConstantPointer(const Constant_Demo* const obj) const;
};
