#include "OperatorDemo.h"

int main() {
    Vector vec1(3.0, 4.0); // Create first vector
    Vector vec2(1.0, 2.0); // Create second vector

    // Demonstrate addition
    Vector sum = vec1 + vec2;
    std::cout << "Sum of " << vec1 << " and " << vec2 << " is: " << sum << std::endl;

    // Demonstrate subtraction
    Vector difference = vec1 - vec2;
    std::cout << "Difference of " << vec1 << " and " << vec2 << " is: " << difference << std::endl;

    return 0;
}
