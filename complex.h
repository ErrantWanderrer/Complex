#ifndef __COMPLEX__
#define __COMPLEX__

struct Complex{
    float real;
    float imag;
};

Complex add(Complex *a, Complex *b);

Complex vide(Complex *a, Complex *b);

Complex divide(Complex *a, Complex *b);

float modz(Complex *a);

float argz(Complex *a);

Complex sopr(Complex *a);

void algebr(Complex a);

void trigon(Complex *a);

void pokaz(Complex *a);

#endif
