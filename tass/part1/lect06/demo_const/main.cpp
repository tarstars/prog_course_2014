#include <iostream>

using namespace std;

void f(int x) {
  x = 128;
}

void print(vector<int> const & arr) {

}

int main() {
  int a = 5;

  cout << "a before f = " << a << endl;
  f(a);
  cout << "a after f = " << a << endl;

  int b = 10;

  int * const pa = &b; //константный указатель
  int const * pb;
  
  //pa = &a;
  *pa = 5;

  pb = &b; 
  //*pb = 7;

  int const &bb = b;
  //bb = 13;
  b = 13;

  cout << *pa << endl;
  cout << *pb << endl;

  return 0;
}
