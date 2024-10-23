#include "Type_casting.h"

void Type_casting::primitiveTypecasting() {

    int a = 42;
    double b = a; 

    double c = 42.7;
    int d = static_cast<int>(c); 

    std::cout << "Implicit casting (int to double): " << b << std::endl;
    std::cout << "Explicit casting (double to int): " << d << std::endl;
}

void Type_casting::classTypecasting() {
    Base* basePtr = new Derived(); 
    basePtr->show();

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->show();
    }
    else {
        std::cout << "Dynamic casting failed!" << std::endl;
    }

    delete basePtr;
}

void Type_casting::riskyTypecasting() {
    int num = 65;
    char* charPtr = reinterpret_cast<char*>(&num); 

    std::cout << "Reinterpreted cast result (int to char): " << *charPtr << std::endl;

}

void Type_casting::constTypecasting() {
    const int constant = 100;
    int* nonConstPtr = const_cast<int*>(&constant); 

    *nonConstPtr = 200; 

    std::cout << "Modified constant value using const_cast: " << *nonConstPtr << std::endl;
}

void Base::show() const {
    std::cout << "Base class show function." << std::endl;
}

void Derived::show() const {
    std::cout << "Derived class show function." << std::endl;
}
