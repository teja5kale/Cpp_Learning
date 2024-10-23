#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class TemplateSort {
public:
   
    TemplateSort(int size);

    void getInput();

    void sortArray();

    void displayArray() const;

private:
    std::vector<T> elements; 
};
