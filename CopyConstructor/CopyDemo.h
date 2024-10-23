#pragma once
#include <iostream>
#include <string>

class CopyDemo {
public:
   
    CopyDemo(int num, const std::string& str);

    CopyDemo(const CopyDemo& other);

    void display() const;

private:
    int number;          
    std::string text;    
};
