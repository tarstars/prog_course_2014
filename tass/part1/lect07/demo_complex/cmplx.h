
#include <iostream>

class Complex {
  double rho, phi;
 public:
 Complex() : rho(0), phi(0) {}
  Complex(const Complex& r);
  Complex(double rho, double phi);
  Complex static newDecart(double, double);
  Complex& operator=(const Complex& r);

  friend std::ostream& operator<<(std::ostream& os, const Complex& r);
};

