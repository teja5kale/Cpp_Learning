#include "Constant_Demo.h"

Constant_Demo::Constant_Demo(int cv, int vv) : constantValue(cv), variableValue(vv) {}

void Constant_Demo::showConstant() const {
    std::cout << "Constant Value: " << constantValue << std::endl;
}

void Constant_Demo::modifyVariable(int newValue) {
    variableValue = newValue;
    std::cout << "Variable Value modified to: " << variableValue << std::endl;
}

int Constant_Demo::getVariable() const {
    return variableValue;
}

void Constant_Demo::showWithConstantPointer(const Constant_Demo* const obj) const {
    std::cout << "Constant Pointer: Constant value: " << obj->constantValue << ", Variable value: " << obj->variableValue << std::endl;
}

