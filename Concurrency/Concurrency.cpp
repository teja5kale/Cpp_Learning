#include "ConcurrencyDemo.h"

int main() {
    int numThreads;

    // Get the number of threads from user
    std::cout << "Enter the number of threads to create: ";
    std::cin >> numThreads;

    // Create a ConcurrencyDemo object
    ConcurrencyDemo demo(numThreads);

    // Start the threads
    demo.startThreads();

    return 0;
}
