#include <iostream>

using namespace std;

int main(){

  int arr[]={1,2,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int m=1;
  int a=arr[0];
    for (int i=m;i<n;i++){
      
      if ((i+m)!=n) {
	int b=arr[i];
	arr[i]=a;
	a=b;
      }
      else {int c=i;
	for (i=0;i<m;i++){
	  arr[i]=arr[c];
	  c+=1;
	  }
      }     
    }
  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}
