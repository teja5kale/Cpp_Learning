#pragma once
#include <vector>
#include <string>

class IOLoop {
public:
    void getInput(); 
    void calculateStatistics();
    void displayResults(); 

private:
    std::vector<int> numbers; 
    int sum;
    int positiveCount; 
    int negativeCount;
    int zeroCount;

    void clearData(); 
    void reverseNumbers(); 
};
