#include<iostream>
using namespace std;
int main(){
int a[5]={4,5,6,7,8};
int n=sizeof (a)/4;
for(int i=0;i<=n;i++){
    cout<<a[i]<<" ";
}
int i=0;
int j=n-1;
while(i<j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
cout<<endl;
for(int i=0;i<=n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
if(a[n]==a[i])cout<<"it is a palindrome";
else cout<<"it isn't a palindrome";
}