#include <iostream>

using namespace std;

class Tens4
{
 public:
  double dat[3][3][3][3];
  Tens4();
  Tens4(const Tens4& t);
  //Tens4& operator=(const Tens4& t);
  friend std::ostream& operator<<(std::ostream& os, const Tens4& t);  
  friend float At(Tens4& t, int p,int q, int m, int n);
  friend void Set(Tens4& t, int p,int q, int m, int n, float val);
  friend void PrintTensor(Tens4& t);
};
