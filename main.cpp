#include <iostream>

#include "complex.h"

using namespace std;

int main() {
    Complex a;
    Complex b;
    a.real = 2;
    a.imag = 4;
    b.real = 3;
    b.imag = 5;
    Complex c = add(&a, &b);

    cout << c.real << " " << c.imag << endl;

    c = vide(&a, &b);

    cout << c.real << " " << c.imag << endl;

    algebr(divide(&a, &b));

    cout << modz(&a) << endl;
    cout << argz(&a) << endl;
    algebr(sopr(&a));

    trigon(&a);
    pokaz(&a);

    return 0;
}
