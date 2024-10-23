#include "TemplateSort.h"

int main() {
    int size;

    // Get the size of the array from the user
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Create a TemplateSort object for integers
    TemplateSort<int> intSorter(size);
    intSorter.getInput();
    intSorter.sortArray();
    intSorter.displayArray();

    // You can create TemplateSort objects for other types if needed
    // For example:
    // TemplateSort<double> doubleSorter(size);
    // ...

    return 0;
}
