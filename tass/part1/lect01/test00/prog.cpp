#include <iostream>

using namespace std;

int main() {
  int a, b, c, n;
  cin >> n;
  for(a=1,b=1,c=2; c<n; a=b, b=c, c=a+b) 
    cout << a << endl;
}
