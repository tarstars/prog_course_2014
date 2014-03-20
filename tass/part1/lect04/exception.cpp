#include <iostream>

using namespace std;

void h(int a) {
  if (a == 42) {
    throw("sence of life found");
  }
}

int do_long_stuff() {
  cout << "wery long stuff" << endl;
  return 271828;
}

void g(int a) {
  h(a);
}

int f(int a) {
  g(a);
  return do_long_stuff();
}

void work() {
  int a = 42;
  int y = f(a);
  cout << "y = " << y << endl;
}

int main() {
  try {
    work();
  } catch(const char* msg) {
    cout << "error: " << msg << endl;
  }
}
