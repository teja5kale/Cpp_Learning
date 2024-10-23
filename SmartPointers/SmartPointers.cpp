#include "SmartPointerDemo.h"

int main() {
    // Create a SmartPointerDemo object with a unique_ptr and a shared_ptr
    SmartPointerDemo demo(42, { 10, 20, 30, 40, 50 });

    // Display the values managed by smart pointers
    demo.displayUniquePointer();
    demo.displaySharedPointer();

    return 0;
}
