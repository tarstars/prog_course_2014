#include <iostream>
#include "Tens4.h"
using namespace std;


int main(){

 
 
  Tens4 a;
  cout<<a.dat[0][0][0][0]<<endl;
  
  Tens4 b(a);
  cout<<b.dat[0][0][0][0]<<endl;

  Set(a,0,0,0,0,22);
  cout<<a.dat[0][0][0][0]<<endl;
  cout<<At(a,0,0,0,0)<<endl;

  PrintTensor(a);
  
  return 0;

}
