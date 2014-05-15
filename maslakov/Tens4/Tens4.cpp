#include "Tens4.h"

#include <iostream>
#include <cmath>

using namespace std;

Tens4::Tens4()
{
  int p,q,m,n;
  
  for(p = 0; p < 3; ++p)
    for(q = 0; q < 3; ++q)
      for(m = 0; m < 3; ++m)
	for(n = 0; n < 3; ++n)
	  dat[p][q][m][n] = 0;
}

Tens4::Tens4(const Tens4& t){
int p,q,m,n;
  
  for(p = 0; p < 3; ++p)
    for(q = 0; q < 3; ++q)
      for(m = 0; m < 3; ++m)
	for(n = 0; n < 3; ++n)
	  
	  dat[p][q][m][n]=t.dat[p][q][m][n];
}


float At(Tens4& t, int p,int q, int m, int n)
{
  return t.dat[p][q][m][n];
}

void Set(Tens4& t, int p,int q, int m, int n,float val)
{
  t.dat[p][q][m][n]=val;
}

void PrintTensor(Tens4& t)
{
int p,q,m,n;
  
  for(p = 0; p < 3; ++p)
    for(q = 0; q < 3; ++q)
      for(m = 0; m < 3; ++m)
	for(n = 0; n < 3; ++n)
	  
	  cout<<t.dat[p][q][m][n];

}

ostream&
operator<<(ostream& os, const Tens4& t) {
	return os << t.dat<< endl;
}


