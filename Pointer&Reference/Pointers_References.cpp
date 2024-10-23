#include "Pointers_References.h"

#include <limits>

bool Pointers_References::swapUsingPointer(int* a, int* b) {
    if (!a || !b) {
        std::cout << "Invalid pointers passed for swapping." << std::endl;
        return false;
    }
    int temp = *a;
    *a = *b;
    *b = temp;
    return true;
}

void Pointers_References::swapUsingReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void Pointers_References::operateOnArray() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid array size!" << std::endl;
        return;
    }

    int* array = new int[size];

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    int sum = 0, product = 1, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();

    for (int i = 0; i < size; ++i) {
        sum += *(array + i);
        product *= *(array + i);
        if (*(array + i) < min) {
            min = *(array + i);
        }
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }

    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Product of array elements: " << product << std::endl;
    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    delete[] array;
}

void Pointers_References::pointerToPointer() {
    int value = 42;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer points to: " << *ptr << std::endl;
    std::cout << "Pointer to pointer points to: " << **ptrToPtr << std::endl;
}

void Pointers_References::referenceToPointer(int*& refPtr) {
    int newValue = 100;
    refPtr = &newValue;

    std::cout << "Reference to pointer now points to: " << *refPtr << std::endl;
}
