#include <iostream>

using namespace std;

class CustomVector {
  double *pDat;
  int n;

public:
  CustomVector() : pDat(0), n(0) {}
  CustomVector(int xn) : pDat(new double[xn]), n(xn) {
    //pDat = new double[xn];
    //n = xn;
  }
  ~CustomVector() {delete []pDat;}

  double& operator[](int ind) {return pDat[ind];}
  const double& operator[](int ind) const {return pDat[ind];}

  int size() const {return n;}
  CustomVector(const CustomVector& r) {
    pDat = new double[r.n];
    n = r.n;
    for(int t = 0; t < n; ++t) {
      pDat[t] = r.pDat[t];
    }
  }

  CustomVector& operator=(const CustomVector& r) {
    CustomVector tmp(r);
    
    tmp.swap(*this);

    return *this;
  }

  void swap(CustomVector& r) {
    ::swap(n, r.n);
    ::swap(pDat, r.pDat);
  }
};

ostream& operator<<(ostream& os, const CustomVector& r) {
  for(int t = 0; t < r.size(); ++t) {
    cout << r[t] << " ";
  }
  return os;
}

int main() {
  CustomVector a(5);

  for(int t = 0; t < 5; ++t) {
    a[t] = 10 * t;
  }

  CustomVector b = a;

  CustomVector c;
  c = a;

  cout << c << endl;
  a[2] = 222;
  cout << c << endl;
}




void testCin() {
  int n;
  cin >> n;

  //double *pa = new double[n];
  CustomVector a(n);

  for(int i = 0; i < n; ++i) {
    cin >> a[i];// =a.operator[](i)
  }

  double x;
  cin >> x;

  //double *pb = new double[n+1];
  CustomVector b(n+1);
  for(int i = 0; i < n; ++i) {
    b[i] = a[i];
  }
  b[n] = x;
}
