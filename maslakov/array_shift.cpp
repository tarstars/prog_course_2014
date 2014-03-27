#include <iostream>

using namespace std;



void  inverce(int *arr,int n){
  
  
  int i=0;
  int j=n-1;
  while (i<j){
    int tmp=arr[i];
    arr[i]=arr[j];arr[j]=tmp;
    ++i;
    --j;
  }
}

void shift(int *arr,int n, int m){
  m%=n;

  inverce(arr,n-m);
  inverce(arr+n-m,m);
  inverce(arr,n);

}

int main(){

  int arr[]={1,2,3,4,5,6};
  
  int m;
  cout<<"Введите велчину свига: "<<endl;
  cin>>m;

  int n=sizeof(arr)/sizeof(arr[0]);

  shift(arr,n,m);
  cout<<"вот что вышло: "<<endl;
  for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  cout<<" "<< endl; 
  
  

  return 0;
}
