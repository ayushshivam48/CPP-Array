#include<iostream>
using namespace std;
int main(){
int arr[5];
cout<<"Enter array elements: ";
for(int i=0;i<=4;i++){
    cin>>arr[i];
}
int mx=0;
for(int i=0;i<=4;i++){
    if(arr[i]>mx) mx=arr[i];
   }
   int smx=0;
for(int i=0;i<=4;i++){
    if(arr[i]!=mx) smx=arr[i];
   }
   cout<<"2nd max no in the array:"<<smx;
}