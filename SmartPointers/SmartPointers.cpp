#include "SmartPointerDemo.h"

int main() {
    
    SmartPointerDemo demo(42, { 10, 20, 30, 40, 50 });

    demo.displayUniquePointer();
    demo.displaySharedPointer();

    return 0;
}
