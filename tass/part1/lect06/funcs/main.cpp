#include <iostream>

using namespace std;

void createArray(int **ppa, int *pnarr) {
  int a[] = {1, 2, 3, 4, 5, 6, 17, 255, 128, 64, 32, 16, 8};
  int n = sizeof(a) / sizeof(a[0]);
  *pnarr = n;

  *ppa = new int[n];
  for(int t = 0; t < n; ++t) {
    (*ppa)[t] = a[t];
  }
}

void printArray(int *arr, int narr) {
  for(int t = 0; t < narr; ++t) {
    cout << arr[t] << " ";
  }
  cout << endl;
}

int main() {
  int * pa;
  int narr;
  createArray(&pa, &narr); // 1 2 3 4 5 6 17
  printArray(pa, narr);
  delete [] pa;
}
