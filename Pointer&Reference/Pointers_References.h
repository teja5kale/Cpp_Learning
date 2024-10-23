#pragma once
#include <iostream>
#include <vector>

class Pointers_References {
public:
    // Function to swap two integers using pointers with error handling
    bool swapUsingPointer(int* a, int* b);

    // Function to swap two integers using references with error handling
    void swapUsingReference(int& a, int& b);

    // Function to dynamically allocate memory for an array and perform operations
    void operateOnArray();

    // Function to demonstrate a pointer to a pointer
    void pointerToPointer();

    // Function to demonstrate a reference to a pointer
    void referenceToPointer(int*& refPtr);
};
