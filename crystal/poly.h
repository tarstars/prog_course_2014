#ifndef POLY_H_INCLUDED
#define POLY_H_INCLUDED

#include <iostream>
#include <complex>
#include <cmath>

//using namespace std;

class Poly
{
  std::complex <double> c[4];  // коэффициенты
public:
    Poly();
    Poly(std::complex <double> const &, std::complex <double> const &, std::complex <double> const &, std::complex <double> const &);
    Poly(std::complex <double> *);
    Poly(const Poly&);

    std::complex <double> At(int);
    void Set(int, std::complex <double>);

    Poly Canon();
    void Roots(std::complex <double> *, std::complex <double> *, std::complex <double> *);

    friend std::ostream& operator<<(std::ostream&, const Poly&);
  //  friend Poly operator+(const Poly&, const Poly&);
 //   friend Poly operator-(const Poly&, const Poly&);
 //   friend Poly operator*(const Poly&, const Poly&);
};

#endif // POLY_H_INCLUDED
