#include "Pointers_References.h"
#include <iostream>

int main() {
    Pointers_References pr;

    // Demonstrating swapping using pointers with error handling
    int a = 5, b = 10;
    std::cout << "Before swap (Pointer): a = " << a << ", b = " << b << std::endl;
    if (pr.swapUsingPointer(&a, &b)) {
        std::cout << "After swap (Pointer): a = " << a << ", b = " << b << std::endl;
    }

    // Demonstrating swapping using references
    int x = 15, y = 20;
    std::cout << "\nBefore swap (Reference): x = " << x << ", y = " << y << std::endl;
    pr.swapUsingReference(x, y);
    std::cout << "After swap (Reference): x = " << x << ", y = " << y << std::endl;

    // Demonstrating dynamic array operations using pointers
    pr.operateOnArray();

    // Demonstrating pointer to pointer
    std::cout << "\nDemonstrating pointer to pointer:\n";
    pr.pointerToPointer();

    // Demonstrating reference to pointer
    std::cout << "\nDemonstrating reference to pointer:\n";
    int* ptr = nullptr;
    pr.referenceToPointer(ptr);

    return 0;
}
