#pragma once
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

class ConcurrencyDemo {
public:
    // Constructor
    ConcurrencyDemo(int numThreads);

    // Method to start threads
    void startThreads();

private:
    int numThreads; // Number of threads
    std::mutex mtx; // Mutex for synchronization

    // Method for the thread to execute
    void threadFunction(int threadID);
};
