//213. House Robber II
//Input: nums = [2,3,2] Output: 3
//Input: nums = [1,2,3,1]Output: 4
//Input: nums = [1,2,3] Output: 3
//Tabulation method
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int start,int end){
    vector<int>dp(arr.size(),0);
    dp[start]=arr[start];
    for(int i=start+1;i<=end;i++){
        int rob=arr[i];
        if(i-2>=start){
            rob=arr[i]+dp[i-2];
        }
        int notrob=dp[i-1];
        dp[i]=max(rob,notrob);
    }
    return dp[end];
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
    int case1=solve(arr,0,n-2);
    int case2=solve(arr,1,n-1);
    int ans=max(case1,case2);
    cout<<"Maximum money can be rob: "<<ans;
}