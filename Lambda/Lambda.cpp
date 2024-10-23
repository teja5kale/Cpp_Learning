#include "LambdaDemo.h"

int main() {
 
    LambdaDemo demo({ 5, 3, 8, 1, 4, 6, 7, 2 });

    std::cout << "Original Numbers: ";
    demo.displayNumbers();

    demo.sortNumbers();
    std::cout << "Sorted Numbers: ";
    demo.displayNumbers();

    demo.filterEvenNumbers();
    std::cout << "After Filtering Even Numbers: ";
    demo.displayNumbers();

    return 0;
}
