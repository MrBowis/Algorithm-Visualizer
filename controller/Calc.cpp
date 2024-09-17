#include "../model/Calc.h"

Calc::Calc() {
    this->a = 0;
    this->b = 0;
    this->result = 0;
}

Calc::Calc(double a, double b) : a(a), b(b) {
    this->result = 0;
}

void Calc::setA(double a) {
    this->a = a;
}

void Calc::setB(double b) {
    this->b = b;
}

double Calc::getA() {
    return this->a;
}

double Calc::getB() {
    return this->b;
}

double Calc::add() {
    this->result = this->a + this->b;
    return this->result;
}

double Calc::sub() {
    this->result = this->a - this->b;
    return this->result;
}

double Calc::mul() {
    this->result = this->a * this->b;
    return this->result;
}

double Calc::div() {
    if (this->b == 0) {
        return 0;
    }
    this->result = this->a / this->b;
    return this->result;
}

Calc::~Calc() {
    // Destructor
}