#pragma once
#include <vector>

class SortingSearching {
public:
    void getInput(); 
    void sortArray(); 
    void linearSearch(int key); 
    void binarySearch(int key); 
    void displayArrays(); 

private:
    std::vector<int> numbers; 
    std::vector<int> sortedNumbers; 
};

