//198. House Robber
//Input: nums = [1,2,3,1] Output: 4
//Input: nums = [2,7,9,3,1] Output: 12
//memoization method
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,vector<int>&dp,int ind){
    if(ind<0){
        return 0;   
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int rob=arr[ind]+solve(arr,dp,ind-2);
    int skip=solve(arr,dp,ind-1);
    dp[ind]=max(rob,skip);
    return dp[ind];
}
int main(){
    int n;
    cout<<"Enter the no of house: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the house money: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n,-1);
    int ans=solve(arr,dp,n-1);
    cout<<"Maximum amount can be rob: "<<ans;
}