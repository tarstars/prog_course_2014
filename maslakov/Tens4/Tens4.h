#include <iostream>
#include "Coeff.h"

using namespace std;

class Coeff;

class Tens4
{
 public:
  double dat[3][3][3][3];
  //Tens4();//costructor by default
  Tens4(const Tens4& t);//copy constructor
  Tens4(const Coeff& r);
  
  friend std::ostream& operator<<(std::ostream& os, const Tens4& t);  
  friend float At(Tens4& t, int p,int q, int m, int n);
  friend void Set(Tens4& t, int p,int q, int m, int n, float val);//set values by indexes
  friend void PrintTensor(Tens4& t);//print tensor's components as a linear array
  
};
