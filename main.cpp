#include <iostream>
#include "controller/Calc.cpp"

int main() {
    
    Calc calculadora = Calc();

    std::cout << "Enter first number: " << std::endl;
    double a;
    std::cin >> a;
    calculadora.setA(a);

    return 0;
}