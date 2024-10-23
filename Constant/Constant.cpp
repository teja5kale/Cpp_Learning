#include "Constant_Demo.h"

int main() {

    Constant_Demo constantObj(10, 20);

    constantObj.showConstant();

    constantObj.modifyVariable(50);

    std::cout << "Variable Value: " << constantObj.getVariable() << std::endl;

    const Constant_Demo* const ptr = &constantObj;
    constantObj.showWithConstantPointer(ptr);

    return 0;
}
