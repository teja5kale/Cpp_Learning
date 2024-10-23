#pragma once
#include <vector>
#include <string>

class ArrayString {
public:
    void getStrings(); 
    void sortStrings(); 
    void displayStrings();

private:
    std::vector<std::string> strings; 
    std::string concatenateStrings(); 
};
