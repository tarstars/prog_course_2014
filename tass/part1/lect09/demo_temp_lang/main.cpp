#include <iostream>

using namespace std;

template<int T>
void f(void) {
  int arr[T];
  for(int q = 0; q < T; q++) {
    arr[q] = 0;
  }

  arr[0] = 1;

  for(int p = 0; p < T; p++) {
    int ppv = 1, pv;
    for(int q = 1; q <= p; q++) {
      pv = arr[q];
      arr[q] = ppv + pv;
      ppv = pv;
    }
  }

  for(int q = 0; q < T; q++) {
    cout << arr[q] << " ";
  }
  cout << endl;

  f<T-1>();
}

template<>
void f<0>(void) {
  cout << "This is the End!!!" << endl;
}

int main() {
  f<10>();
 
  return 0;
}
