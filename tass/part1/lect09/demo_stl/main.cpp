#include <iostream>
#include <complex>
#include <vector>

using namespace std;

class SayKu {
public:
  SayKu() {cout << "ku! ";}
}; 

int main() {
  cout << "c-style" << endl;
  SayKu a[10];
  cout << endl;
  cout << "vector" << endl;
  vector<complex<double>> dat(10);

  return 0;
}
