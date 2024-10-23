#include "TemplateSort.h"

// Constructor to initialize the size
template <typename T>
TemplateSort<T>::TemplateSort(int size) {
    elements.reserve(size); // Reserve space for elements
}

// Method to get user input
template <typename T>
void TemplateSort<T>::getInput() {
    std::cout << "Enter " << elements.capacity() << " elements:" << std::endl;
    T element;
    for (int i = 0; i < elements.capacity(); ++i) {
        std::cout << "> ";
        std::cin >> element;
        elements.push_back(element);
    }
}

// Method to sort the array
template <typename T>
void TemplateSort<T>::sortArray() {
    std::sort(elements.begin(), elements.end());
}

// Method to display the sorted array
template <typename T>
void TemplateSort<T>::displayArray() const {
    std::cout << "\nSorted Array:" << std::endl;
    for (const auto& elem : elements) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Explicit instantiation for commonly used types
template class TemplateSort<int>;
template class TemplateSort<double>;
template class TemplateSort<std::string>;
