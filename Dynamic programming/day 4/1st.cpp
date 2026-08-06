//Frog jump with K distances
//Input: heights = [10, 5, 20, 0, 15], k = 2 Output: 15
//Explanation:0th step -> 2nd step, cost = abs(10 - 20) = 10 2nd step -> 4th step, cost = abs(20 - 15) = 5 Total cost = 10 + 5 = 15.
#include<bits/stdc++.h>
using namespace std;
int minimumstepsrequired(int ind,vector<int>&arr,vector<int>&dp,int k){
    if(ind==0)return 0;
    if(dp[ind]!=-1)return dp[ind];
    int mini=INT_MAX;
    for(int j=1;j<=k;j++){
        if(ind-j>=0){
            int jump=minimumstepsrequired(ind-j,arr,dp,k)+abs(arr[ind]-arr[ind-j]);
            mini=min(mini,jump);
        }
    }
    return dp[ind]=mini;
}
int main(){
    int n;
    cout<<"Enter the no of heights";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the values of heights:  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    vector<int>dp(n,-1);
    dp[0]=0;
    int res=minimumstepsrequired(n-1,arr,dp,k);
    cout<<"Minimum steps required to complete: "<<res<<endl;
}