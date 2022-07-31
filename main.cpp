#include <iostream>

#include "lib/math/operations.hpp"

#ifndef CMAKEMACROSEXAMPLE
#define CMAKEMACROSEXAMPLE "Nothing"
#endif

int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << CMAKEMACROSEXAMPLE << std::endl;

    math::operations op;
    int sum = op.sum(4, 5);

    std::cout << "Result = " << sum << std::endl;

    return 0;
}