#ifndef POLY_H_INCLUDED
#define POLY_H_INCLUDED

#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

class Poly
{
    complex <double> c[4];  // коэффициенты
public:
    Poly();
    Poly(complex <double>, complex <double>, complex <double>, complex <double>);
    Poly(complex <double> *);
    Poly(const Poly&);

    complex <double> At(int);
    void Set(int, complex <double>);

    Poly Canon();
    void Roots(complex <double> *, complex <double> *, complex <double> *);

    friend std::ostream& operator<<(std::ostream&, const Poly&);
  //  friend Poly operator+(const Poly&, const Poly&);
 //   friend Poly operator-(const Poly&, const Poly&);
 //   friend Poly operator*(const Poly&, const Poly&);
};

#endif // POLY_H_INCLUDED
