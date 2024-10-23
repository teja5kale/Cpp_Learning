#include "LambdaDemo.h"

int main() {
    // Create a LambdaDemo object with a collection of integers
    LambdaDemo demo({ 5, 3, 8, 1, 4, 6, 7, 2 });

    std::cout << "Original Numbers: ";
    demo.displayNumbers();

    // Sort the numbers
    demo.sortNumbers();
    std::cout << "Sorted Numbers: ";
    demo.displayNumbers();

    // Filter out even numbers
    demo.filterEvenNumbers();
    std::cout << "After Filtering Even Numbers: ";
    demo.displayNumbers();

    return 0;
}
