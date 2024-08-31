#include<iostream>
#include<vector>
using namespace std;
bool checkPrifixSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=1;i<v.size();i++){
        total_sum+=v[i];
    }
    int prifix_sum=0;
    for(int i=1;i<v.size();i++){
        prifix_sum+=v[i];
    int suffix_sum=total_sum-prifix_sum;
    if(suffix_sum==prifix_sum){
        return true;
        }
    }return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkPrifixSuffixSum<<endl;
}