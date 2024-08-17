#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[5];
cout<<"Enter array elements: ";
for(int i=0;i<=4;i++){
    cin>>arr[i];
}
for(int i=0;i<=4;i++){
    if(arr[i]%2==0)cout<<arr[i]+10<<" ";
     else cout<<arr[i]*2<<" ";
    }
}