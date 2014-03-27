#include <iostream>
using namespace std;

struct ModRes{
  int mod7;
  int mod11;
  int mod13;
};

ModRes enc(int n){

  ModRes ret;

  ret.mod7=n%7;
  ret.mod11=n%11;
  ret.mod13=n%13;

return ret;

}

int dec(int a,int b,int c){
  int n;
  for (n=1001;n>0;n--){
    ModRes res = enc(n);
    if ((res.mod7==a)&&(res.mod11==b)&&(res.mod13==c)) {
     return n;}
  }
  
}

void add(int *a1,int *a2,int *a3,int *b1,int *b2,int *b3){
  
  (*a1)+=(*b1);
  (*a2)+=(*b2);
  (*a3)+=(*b3);

}

void mul(int &a1, int &a2, int &a3, int &b1, int &b2, int &b3){
  (a1)*=(b1);
  (a2)*=(b2);
  (a3)*=(b3);

}

void subs(int *a1,int *a2,int *a3,int *b1,int *b2,int *b3){
  
  (*a1)-=(*b1);
  (*a2)-=(*b2);
  (*a3)-=(*b3);

}

int main() {

  //-----------------------Task1------------------------------------

  //  cout<<"Encoding..: введите число"<<endl;
  //  int n;
  // cin>>n;
  
  //  ModRes a=enc(n);
  
  // cout<<a.mod7<<" "<<a.mod11<<" "<<a.mod13<<endl;

  //--------------------------Task2----------------------------------
  
  //cout<<"Decoding..:"<<endl;
  //cout<<"введите число 0<=a<7"<<endl;
  //int a;
  //cin>>a;
  
  //cout<<"введите число 0<=b<11"<<endl;
  //int b;
  //cin>>b;

  //cout<<"введите число 0<=c<13"<<endl;
  //int c;
  //cin>>c;

  //cout<<"искомое n= "<<dec(a,b,c)<<endl;
 
  //----------------Task3-----------------

  //int a1;int a2; int a3; int b1; int b2; int b3;
  //cin>>a1>>a2>>a3>>b1>>b2>>b3;
  //mul(a1,a2,a3,b1,b2,b3);  
  //cout<<a1<<" "<<a2<<" "<<a3<<endl;

  cout<<"please input n1"<<endl;
  int n1; int n2;
  cin>>n1;
  cout<<"please input n2"<<endl;
  cin>>n2;
  cout<<"type the operation code: 0 - addition, 1 - multipelxion, 2 - substraction"<<endl;
  int m; 
  cin>>m;
  

  ModRes a=enc(n1);
  ModRes b=enc(n2);
  cout<<a.mod7<<" "<<a.mod11<<" "<<a.mod13<<endl;
  cout<<b.mod7<<" "<<b.mod11<<" "<<b.mod13<<endl;

  
  switch(m){
  case 0:
    
    add(&a.mod7,&a.mod11,&a.mod13,&b.mod7,&b.mod11,&b.mod13);
    cout<<a.mod7<<" "<<a.mod11<<" "<<a.mod13<<endl;
    cout<<dec((a.mod7),(a.mod11),(a.mod13))<<endl;
    break;
 
  case 1:
    mul(a.mod7,a.mod11,a.mod13,b.mod7,b.mod11,b.mod13);
    cout<<a.mod7<<" "<<a.mod11<<" "<<a.mod13<<endl;
    cout<<dec((a.mod7),(a.mod11),(a.mod13))<<endl;
    break;

  case 2:
    subs(&a.mod7,&a.mod11,&a.mod13,&b.mod7,&b.mod11,&b.mod13);
    cout<<a.mod7<<" "<<a.mod11<<" "<<a.mod13<<endl;
    cout<<dec((a.mod7),(a.mod11),(a.mod13))<<endl;
    break;
  }

return 0;

}
