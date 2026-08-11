//198. House Robber
//Input: nums = [1,2,3,1] Output: 4
//Input: nums = [2,7,9,3,1] Output: 12
//Tabulation  method
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of house: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the house money: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prev=arr[0];
    int prev2=0;
    for(int i=0;i<n;i++){
        int take=arr[i];
        if(i>1){
            take+=prev2;
        }
        int nottake=0+prev;
        int curr=max(take,nottake);
        prev2=prev;
        prev=curr;
    }
    cout<<"Maximum amount can be rob: "<<prev;
}