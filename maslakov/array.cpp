#include <iostream>
using namespace std;




int main(){

  double arr[]={1,2,3,5,8};
  
  int n=sizeof(arr)/sizeof(arr[0]);

  double first=arr[0];
  double last=arr[n];
  
  
  double b=first;
  for (int i=1;i<n-1;i++){
    
    
    double c=arr[i];
    arr[i]=0.5*(b+arr[i+1]);
    b=c;

  }
  for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  cout<<" "<< endl; 
  return 0;

}
