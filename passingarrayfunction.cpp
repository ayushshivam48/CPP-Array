#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=9;
 }
int main(){
int arr[5] = {4,5,6,7,8};
for(int i=0;i<=4;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
for(int i=0;i<=4;i++){
    cout<<arr[i]<<" ";
    }
}