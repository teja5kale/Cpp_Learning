#pragma once
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

class ConcurrencyDemo {
public:
    ConcurrencyDemo(int numThreads);

    void startThreads();

private:
    int numThreads; 
    std::mutex mtx; 

    void threadFunction(int threadID);
};
