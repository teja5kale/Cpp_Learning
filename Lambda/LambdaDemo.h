#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class LambdaDemo {
public:
   
    LambdaDemo(const std::vector<int>& numbers);

    void sortNumbers();

    void filterEvenNumbers();

    void displayNumbers() const;

private:
    std::vector<int> numbers;
