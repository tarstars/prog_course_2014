//g++ main.cpp -o prog -std=c++0x

#include <vector>
#include <iostream>

using namespace std;

vector<int> createArray() {
  vector<int> ret = {{1, 2, 3, 5, 7, 255}};
  return ret;
}

void printArray(const vector<int>& arr) {
  for(int val : arr) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  printArray(createArray());
}
