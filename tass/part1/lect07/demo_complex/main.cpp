#include "cmplx.h"

#include <iostream>

using namespace std;

class Test {
public:
  void f() {}
};

int main() {
  Complex c; //Complex()
  Complex a(3, 4); //Complex(double, double)

  Complex b = a; // copy constructor Complex(const Complex&)
  Complex d(a); //copy constructor

  a = Complex::newDecart(3, 4); //operator =

  cout << "complex by default constructor = " << c << endl;
}
