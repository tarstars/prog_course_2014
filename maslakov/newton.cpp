#include <iostream>
using namespace std;
                    
int Cnk(int N,int K)
{
return ( (N<K) ? 0 : ((K==0) ? 1 : ((N-K+1) / double(K) * Cnk(N,K-1))) );
}
       
int Mat(int X,int Y )
{
  return (((X&Y)==0)?0:1);
}
int main()
{
int n;
cin>>n;
char a;

for (int j = 0; j <= n; j++) {
  for (int i=0; i <=j ; i++){
    if (Cnk(j,i)%2==0)
      cout<<"o"<<" ";
    else cout<<"*"<<" ";
}
  cout<<"\n";
}

 cout<<"\n\n\n";


char b;

for (int p=0;p<=n;p++){
   for (int q=0;q<=n;q++){
     if (Mat(p,q)==0)
       cout<<"o"<<" ";
     else cout<<"*"<<" ";
      }
   cout<<"\n";
 }
return 0;
}
