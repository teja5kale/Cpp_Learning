#include "LambdaDemo.h"

// Constructor to initialize numbers
LambdaDemo::LambdaDemo(const std::vector<int>& numbers) : numbers(numbers) {}

// Method to sort numbers using a lambda
void LambdaDemo::sortNumbers() {
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b; // Lambda for ascending order
        });
}

// Method to filter even numbers using a lambda
void LambdaDemo::filterEvenNumbers() {
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0; // Lambda to remove even numbers
        }), numbers.end());
}

// Method to display numbers
void LambdaDemo::displayNumbers() const {
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}
