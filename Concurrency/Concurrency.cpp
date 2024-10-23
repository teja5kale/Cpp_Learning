#include "ConcurrencyDemo.h"

int main() {
    int numThreads;

    std::cout << "Enter the number of threads to create: ";
    std::cin >> numThreads;

    ConcurrencyDemo demo(numThreads);

    demo.startThreads();

    return 0;
}
