//213. House Robber II
//Input: nums = [2,3,2] Output: 3
//Input: nums = [1,2,3,1]Output: 4
//Input: nums = [1,2,3] Output: 3
//Memoization method
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,vector<int>&dp,int ind,int end){
    if(ind>end){
        return 0;
    }
    if(dp[ind]!=-1) {
        return dp[ind];
    }
    int rob=arr[ind]+solve(arr,dp,ind+2,end);
    int notrob=solve(arr,dp,ind+1,end);
    return dp[ind]=max(rob,notrob);
}
int main(){
    int n;
    cout<<"Enter the size of n: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the House Money: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"Maximum amount: "<<arr[0];
        return 0;
    }
    vector<int>dp1(n,-1);
    int case1=solve(arr,dp1,0,n-2);
    vector<int>dp2(n,-1);
    int case2=solve(arr,dp2,1,n-1);
    int ans=max(case1,case2);
    cout<<"Maximum money can be rob: "<<ans;
}