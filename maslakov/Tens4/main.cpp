#include <iostream>
#include "Tens4.h"

using namespace std;


int main(){

 
 
  Tens4 a(Coeff::paratellurite());
  cout<<a.dat[0][0][0][0]<<endl;
  
 
  PrintTensor(a);//print tensor as linear array
  
  return 0;

}
