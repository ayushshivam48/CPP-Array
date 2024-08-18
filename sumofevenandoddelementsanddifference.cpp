#include<iostream>
using namespace std;
int main(){
int arr[5];
cout<<"Enter array elements: ";
for(int i=0;i<=4;i++){
    cin>>arr[i];
}
int sum1=0,sum2=0;
for(int i=0;i<=4;i++){
if(arr[i]%2==0) sum1+=arr[i];
    }
     cout<<"sum of even elements:"<<sum1<<endl;
for(int i=0;i<=4;i++){
   if(arr[i]%2!=0) sum2+=arr[i];
    }
     cout<<"sum of odd elements: "<<sum2<<endl;
   
   cout<<"difference:"<<sum1-sum2;
}