#pragma once
#include <iostream>
#include <vector>

class Pointers_References {
public:

    bool swapUsingPointer(int* a, int* b);

    void swapUsingReference(int& a, int& b);

    void operateOnArray();

    void pointerToPointer();

    void referenceToPointer(int*& refPtr);
};
