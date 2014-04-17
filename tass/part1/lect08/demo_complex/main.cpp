#include "cmplx.h"

#include <iostream>

using namespace std;

void demoPointers() {
  Complex x(1,2), y(10, 20);
  cout << "address of x is " << (&x) << endl;
  cout << "address of y is " << (&y) << endl;

  x.coolF();
  y.coolF();

  Complex *px = &x;
  (*px).coolF();
  px->coolF();
}

void demoConstruction() {
  Complex c; //Complex()
  Complex a(3, 4); //Complex(double, double)

  Complex b = a; // copy constructor Complex(const Complex&)
  Complex d(a); //copy constructor

  a = Complex::newDecart(3, 4); //operator =

  cout << "complex by default constructor = " << c << endl;
}

// void f() {
//   cout << "simple" << endl;
// }

// void f(char x) {
//   cout << "character parameter" << endl;
// }

void f(int x) {
  cout << "int" << endl;
}

/*
void f(double x) {
  cout << "double" << endl;
}
*/

int main() {
  int t = 5;
  cout << t << endl;

  Complex a(3, 4);
  cout << a << endl;
  operator<<(cout, a);
  operator<<(cout, "mama"); // equal to cout<<a<<"mama"

  a.operator>>(cout); // a >> cout;
}
