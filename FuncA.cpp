#include "FuncA.h"
#include <cmath>

<<<<<<< HEAD
// Реалізація обчислення для перших 3 елементів
double FuncA::calculate() const {
    int n = 3;
=======
// Реалізація обчислення тригонометричної функції (ряд)
double FuncA::calculate(int n) const {
>>>>>>> branchA
    double result = 0.0;
    for (int k = 1; k <= n; ++k) {
        double term = std::pow(4.0, k) * (std::pow(4.0, k) - 1) / (std::tgamma(2 * k + 1));
        result += term;
    }
    return result;
}


