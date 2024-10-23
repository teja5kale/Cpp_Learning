#include "TemplateSort.h"

int main() {
    int size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    TemplateSort<int> intSorter(size);
    intSorter.getInput();
    intSorter.sortArray();
    intSorter.displayArray();

    return 0;
}
