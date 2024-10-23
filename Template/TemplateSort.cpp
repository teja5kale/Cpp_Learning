#include "TemplateSort.h"

template <typename T>
TemplateSort<T>::TemplateSort(int size) {
    elements.reserve(size); 
}

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

template <typename T>
void TemplateSort<T>::sortArray() {
    std::sort(elements.begin(), elements.end());
}

template <typename T>
void TemplateSort<T>::displayArray() const {
    std::cout << "\nSorted Array:" << std::endl;
    for (const auto& elem : elements) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template class TemplateSort<int>;
template class TemplateSort<double>;
template class TemplateSort<std::string>;
