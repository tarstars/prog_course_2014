#include <iostream>

using namespace std;

int euclid_mod(int a, int b){

   while(b&&a) (a>b)? (a%=b):(b%=a); 
   if(a) return a; else return b;

}

int euclid_dif(int a, int b){

  while(a!=b){
    if (a>b)  a-=b;
    else b-=a;
  }

  return a;
}

int euclid_mod2(int a, int b){

  if(a==0) return b; 
  if (b==0) return a;
  if(a==b) return a;
  if (a==1||b==1) return 1;
  if((a%2==0)&&(b%2!=0)) return  euclid_mod2(a/2,b);
  if((b%2==0)&&(a%2!=0)) return  euclid_mod2(a,b/2);
  if((b%2==0)&&(a%2==0)) return  2*euclid_mod2(a/2,b/2);
  if (((a%2!=0)&&(b%2!=0))&&(a>b)) return euclid_mod2((a-b)/2,b);
  if (((a%2!=0)&&(b%2!=0))&&(b>a)) return euclid_mod2((b-a)/2,a);
  
}



int main(){

  int a;
  cout<<"введите a"<<endl;
  cin>>a;
  cout<<"введите b"<<endl;
  int b;
  cin>>b;

  cout<<"a="<<a<<" ;b="<<b<<endl;
  // cout<<"nod="<<euclid_mod(a,b)<<endl;//деление по модулю
  //cout<<"nod="<<euclid_dif(a,b)<<endl;//вычитанием
  cout<<"nod="<<euclid_mod2(a,b)<<endl;//деление на 2

}
