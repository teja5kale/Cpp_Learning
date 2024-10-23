#pragma once
#include <iostream>
#include <string>

class Type_casting {
public:
    
    void primitiveTypecasting();

    void classTypecasting();

    void riskyTypecasting();

    void constTypecasting();
};

class Base {
public:
    virtual void show() const;
};

class Derived : public Base {
public:
    void show() const override;
};
