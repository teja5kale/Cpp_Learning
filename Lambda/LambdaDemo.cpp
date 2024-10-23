#include "LambdaDemo.h"

LambdaDemo::LambdaDemo(const std::vector<int>& numbers) : numbers(numbers) {}

void LambdaDemo::sortNumbers() {
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b; 
        });
}

void LambdaDemo::filterEvenNumbers() {
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0; 
        }), numbers.end());
}

void LambdaDemo::displayNumbers() const {
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}
