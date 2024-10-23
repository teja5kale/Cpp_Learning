

#pragma once
#include <iostream>
#include <string>

class Type_casting {
public:
    // Function to demonstrate implicit and explicit typecasting with primitive types
    void primitiveTypecasting();

    // Function to demonstrate casting between base and derived classes
    void classTypecasting();

    // Function to demonstrate reinterpret casting and potential risks
    void riskyTypecasting();

    // Function to demonstrate const_cast
    void constTypecasting();
};

// Base and derived class for demonstrating class typecasting
class Base {
public:
    virtual void show() const;
};

class Derived : public Base {
public:
    void show() const override;
};
