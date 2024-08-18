#include<iostream>
using namespace std;
int main(){
int arr[5];
int x=4;
cout<<"Enter array elements: ";
for(int i=0;i<=4;i++){
    cin>>arr[i];
}
int count=0;
for(int i=0;i<=4;i++){
    if(arr[i]>x) count++;
   }
   cout<<"no greater than x in the array:"<<count;
}