#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5};
    int n=5;
    int k=2;
    k=k%n;
    int arr2[5];
    int j=0;
    for(int i=n-k;i<n;i++){
        arr2[j++]=arr1[i];
    }
    for(int i=0;i<=k;i++){
        arr2[j++]=arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}