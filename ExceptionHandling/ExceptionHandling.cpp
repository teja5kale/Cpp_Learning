#include "ExceptionDemo.h"

int main() {
    ExceptionDemo exDemo;
    int numerator, denominator;

    try {

        exDemo.getInput(numerator, denominator);

        double result = exDemo.performDivision(numerator, denominator);
        std::cout << "Result of division: " << result << std::endl;
    }
    catch (const ExceptionDemo::InvalidInputException& ex) {
        std::cerr << "Caught an exception: " << ex.what() << std::endl;
    }
    catch (const std::runtime_error& ex) {
        std::cerr << "Caught a runtime exception: " << ex.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Caught an unknown exception!" << std::endl;
    }

    return 0;
}
