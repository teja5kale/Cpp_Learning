#include "Constant_Demo.h"

int main() {
    // Create an object of Constant
    Constant_Demo constantObj(10, 20);

    // Show constant value
    constantObj.showConstant();

    // Modify variable value
    constantObj.modifyVariable(50);

    // Show variable after modification
    std::cout << "Variable Value: " << constantObj.getVariable() << std::endl;

    // Demonstrate constant pointer to constant object
    const Constant_Demo* const ptr = &constantObj;
    constantObj.showWithConstantPointer(ptr);

    return 0;
}
