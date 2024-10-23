#include "Type_casting.h"


// Function to demonstrate implicit and explicit typecasting with primitive types
void Type_casting::primitiveTypecasting() {
    // Implicit casting
    int a = 42;
    double b = a; // Implicit conversion from int to double

    // Explicit casting (C++ style)
    double c = 42.7;
    int d = static_cast<int>(c); // Explicit conversion from double to int (truncation)

    std::cout << "Implicit casting (int to double): " << b << std::endl;
    std::cout << "Explicit casting (double to int): " << d << std::endl;
}

// Function to demonstrate casting between base and derived classes
void Type_casting::classTypecasting() {
    Base* basePtr = new Derived(); // Implicit upcasting (Derived to Base)
    basePtr->show();

    // Explicit downcasting using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->show();
    }
    else {
        std::cout << "Dynamic casting failed!" << std::endl;
    }

    delete basePtr;
}

// Function to demonstrate reinterpret casting and potential risks
void Type_casting::riskyTypecasting() {
    int num = 65;
    char* charPtr = reinterpret_cast<char*>(&num); // Reinterpret int pointer as char pointer

    std::cout << "Reinterpreted cast result (int to char): " << *charPtr << std::endl;

    // Risk: data may be misinterpreted, undefined behavior in some cases
}

// Function to demonstrate const_cast
void Type_casting::constTypecasting() {
    const int constant = 100;
    int* nonConstPtr = const_cast<int*>(&constant); // Remove const

    *nonConstPtr = 200; // Modify the value (Dangerous!)

    std::cout << "Modified constant value using const_cast: " << *nonConstPtr << std::endl;
}

// Base class function
void Base::show() const {
    std::cout << "Base class show function." << std::endl;
}

// Derived class function
void Derived::show() const {
    std::cout << "Derived class show function." << std::endl;
}
