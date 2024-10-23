#include "ConcurrencyDemo.h"

// Constructor to initialize the number of threads
ConcurrencyDemo::ConcurrencyDemo(int numThreads) : numThreads(numThreads) {}

// Method to start threads
void ConcurrencyDemo::startThreads() {
    std::vector<std::thread> threads;

    // Create and start threads
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(&ConcurrencyDemo::threadFunction, this, i);
    }

    // Join threads
    for (auto& thread : threads) {
        thread.join();
    }
}

// Method for the thread to execute
void ConcurrencyDemo::threadFunction(int threadID) {
    // Lock the mutex to ensure synchronized access
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << threadID << " is executing." << std::endl;
}
