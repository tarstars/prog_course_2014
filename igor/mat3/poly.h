#ifndef POLY_H_INCLUDED
#define POLY_H_INCLUDED

#include <iostream>
#include <complex>
#include <cmath>

#define pi 3.14159265359

//using namespace std;

class Poly
{
  double c[4];  // коэффициенты
public:
    Poly();
    Poly(double const &, double const &, double const &, double const &);
    Poly(double *);
    Poly(const Poly&);

    double At(int) const;
    void Set(int, double);

    void Roots(std::complex <double> *, std::complex <double> *, std::complex <double> *) const;

    friend std::ostream& operator<<(std::ostream&, const Poly&);
};

double sign(double);

#endif // POLY_H_INCLUDED
