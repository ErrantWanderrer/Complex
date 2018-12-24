#include <iostream>
#include <cmath>

#include "complex.h"

using namespace std;

Complex add(Complex *a, Complex *b) {
    Complex sum;
    sum.real = a->real + b->real;
    sum.imag = a->imag + b->imag;

    return sum;
}

Complex vide(Complex *a, Complex *b) {
    Complex vide;
    vide.real = a->real * b->real - a->imag * b->imag;
    vide.imag = a->real * b->imag + b->real * a->imag;

    return vide;
}

Complex divide(Complex *a, Complex *b) {
    Complex divide;
    divide.real = (a->real*b->real + a->imag * b->imag)/(modz(b)*modz(b));
    divide.imag = (b->real*a->imag - b->imag * a->real)/(modz(b)*modz(b));

    return divide;
}

float modz(Complex *a) {
    return sqrt(a->real*a->real+a->imag*a->imag);
}

float argz(Complex *a) {
    return atan(a->imag/a->real);
}

Complex sopr(Complex *a) {
    Complex sopr;
    sopr.real = a->real;
    sopr.imag = a->imag*-1;
    return sopr;
}

void algebr(Complex a) {
    cout << a.real << " + i("
        << a.imag << ")" << endl;
}

void trigon(Complex *a) {
    cout << modz(a) << "*cos" << (a->real)
        /sqrt(a->real*a->real + a->imag*a->imag) << "+i(sin" << (a->imag)
        /sqrt(a->real*a->real + a->imag*a->imag) << ")" << endl;
}

void pokaz(Complex *a) {
    cout << modz(a) <<"*e^" << a->real << "+i(" << a->imag << ")" << endl;
}
