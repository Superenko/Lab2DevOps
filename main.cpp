#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;
    int n = 5;
    std::cout << "FuncA result: " << func.calculate(n) << std::endl;
    return 0;
}

