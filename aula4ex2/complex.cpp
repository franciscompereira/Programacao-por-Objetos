#include <iostream>
#include "complex.h"

 using namespace std;

 complex::complex() {
    a=0;
    b=0;
}

complex::complex(int a, int b) {
    this->a=a;
    this->b=b;
}

int complex::geta() {
    return a;
}

int complex::getb() {
    return b;
}

void complex::update(int a, int b) {
    this->a=a;
    this->b=b;
}

void complex::shownum(int a, int b) {
    cout << this->a << "+" << this->b << "i" << endl;
}