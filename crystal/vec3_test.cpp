#include "Vec3.h"

#include <iostream>

using namespace std;

int main() {

char t;
double r;
double element;
int index;
index=1;

///////////////////////////////////////////////////////////////////////////////////////////////
//Main func of class Vec3:

  Vec3 a(3, 4, 0);
  Vec3 b(a);
  Vec3 c = a;
  r = a.rad();
  element = a.At(index);
  a.Set(3, 10);

  //a+b = a.operator+(b)
  //cout << a = operator<<(cout, a)

  Vec3 d(0, 0, 0);
  d = a + b;

///////////////////////////////////////////////////////////////////////////////////////////////
//Print of result:

  //cout << "print by element // vector = " << a.x << " " << a.y << " " << a.z << " " << endl;
  cout << "Main print // vector a = " << a ;
  cout << "Copy constructor " << "b = " << b;
  cout << "Copy constructor " << "c = " << c;
  cout << "Obrashenie k elementu vectora" << " (index = " << index << ")" << " = " << element << endl;
  cout << "After replacement // vector = " << a ;
  cout << "Radius ot vectora = " << r << endl;
  cout << "Slogenie vectorov: d = a + b: " << d ;

  int i;
  for (i=1 ; i < 4 ; i++)
	  cout << a.At(i) << endl;



///////////////////////////////////////////////////////////////////////////////////////////////
  cin >> t;
  return 0;
}
