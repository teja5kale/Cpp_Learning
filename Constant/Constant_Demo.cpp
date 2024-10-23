#include "Constant_Demo.h"


// Constructor to initialize both values
Constant_Demo::Constant_Demo(int cv, int vv) : constantValue(cv), variableValue(vv) {}

// Constant member function
void Constant_Demo::showConstant() const {
    std::cout << "Constant Value: " << constantValue << std::endl;
}

// Non-constant member function (modifies variableValue)
void Constant_Demo::modifyVariable(int newValue) {
    variableValue = newValue;
    std::cout << "Variable Value modified to: " << variableValue << std::endl;
}

// Getter for non-constant member
int Constant_Demo::getVariable() const {
    return variableValue;
}

// Constant pointer function
void Constant_Demo::showWithConstantPointer(const Constant_Demo* const obj) const {
    std::cout << "Constant Pointer: Constant value: " << obj->constantValue << ", Variable value: " << obj->variableValue << std::endl;
}

