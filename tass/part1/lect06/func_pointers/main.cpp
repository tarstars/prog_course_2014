#include <iostream>

using namespace std;

int f(int x) {
  return 2*x + 1;
}

int g(int x) {
  return x * x;
}

void printSeq(int(*pf)(int)) {
  for(int p = 0; p < 10; ++p) {
    cout << pf(p) << " ";
  }
  cout << endl;
}

int main() {
  printSeq(f);
  return 0;
}
