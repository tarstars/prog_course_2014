#include "Vec3.h"

#include <iostream>

using namespace std;

int main() {

char t;
float r;
float element;
int index;
index=1;

///////////////////////////////////////////////////////////////////////////////////////////////
//Main func of class Vec3:

  Vec3 a(3, 4, 0);
  Vec3 b(a);
  Vec3 c = a;
  r = rad(a);
  element = At(a, index);
  Set(a, 3, 10);

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
	  cout << At(a,i) << endl;



///////////////////////////////////////////////////////////////////////////////////////////////
  cin >> t;
  return 0;
}
