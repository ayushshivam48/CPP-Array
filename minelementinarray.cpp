#include<iostream>
using namespace std;
int main(){
int arr[5];
cout<<"Enter array elements: ";
for(int i=0;i<=4;i++){
    cin>>arr[i];
}
int mn=arr[0];
for(int i=1;i<=4;i++){
    if(arr[i]<mn) mn=arr[i];
   }
   cout<<"min no in the array:"<<mn;
}