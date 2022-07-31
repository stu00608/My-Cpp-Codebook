#include <iostream>

#ifndef CMAKEMACROSEXAMPLE
#define CMAKEMACROSEXAMPLE "Nothing"
#endif

int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << CMAKEMACROSEXAMPLE << std::endl;
}