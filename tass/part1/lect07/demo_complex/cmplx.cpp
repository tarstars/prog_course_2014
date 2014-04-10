#include "cmplx.h"

#include <cmath>
#include <iostream>

using namespace std;

Complex::Complex(double xrho, double xphi) : rho(xrho), phi(xphi) {
}

Complex::Complex(const Complex& r) : rho(r.rho), phi(r.phi) {
  cout << "copy constructor forever!" << endl;
}

Complex&
Complex::operator=(const Complex& r) {
  cout << "operator = forever!" << endl;
  rho = r.rho;
  phi = r.phi;
  return *this;
}

Complex
Complex::newDecart(double x, double y) {
  Complex ret;
  ret.rho = sqrt(x*x + y*y);
  ret.phi = atan2(y, x);
  return ret;
}

ostream&
operator<<(ostream& os, const Complex& r) {
  return os << r.rho << " " << r.phi;
}



class Test {
public:
  void f() {}
  void g() {}
};
