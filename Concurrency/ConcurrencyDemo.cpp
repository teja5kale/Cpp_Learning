#include "ConcurrencyDemo.h"

ConcurrencyDemo::ConcurrencyDemo(int numThreads) : numThreads(numThreads) {}

void ConcurrencyDemo::startThreads() {
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(&ConcurrencyDemo::threadFunction, this, i);
    }

    for (auto& thread : threads) {
        thread.join();
    }
}

void ConcurrencyDemo::threadFunction(int threadID) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << threadID << " is executing." << std::endl;
}
