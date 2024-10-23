#include "Type_casting.h"

int main() {
    Type_casting demo;

    std::cout << "=== Primitive Typecasting ===" << std::endl;
    demo.primitiveTypecasting();

    std::cout << "\n=== Class Typecasting ===" << std::endl;
    demo.classTypecasting();

    std::cout << "\n=== Risky Typecasting ===" << std::endl;
    demo.riskyTypecasting();

    std::cout << "\n=== Const Typecasting ===" << std::endl;
    demo.constTypecasting();

    return 0;
}
