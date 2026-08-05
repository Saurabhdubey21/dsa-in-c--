//frog jumpTo jump from the ith step to the jth step, the frog requires abs(heights[i] - heights[j]) energy, 
// where abs() denotes the absolute difference. 
// The frog can jump from any step either one or two steps, provided it exists.
// Return the minimum amount of energy required by the frog to go from the 0th step to the (n-1)th steps
//Input: heights = [2, 1, 3, 5, 4] Output: 2
//Explanation:One possible route can be,0th step -> 2nd Step = abs(2 - 3) = 1 2nd step -> 4th step = abs(3 - 4) = 1 Total = 1 + 1 = 2.
#include<bits/stdc++.h>
using namespace std;
int findminimumsteps(int ind,vector<int>&arr,vector<int>&dp){
    if(ind==0)return 0;
    if(dp[ind]!=0)return dp[ind];
    int left=findminimumsteps(ind-1,arr,dp)+abs(arr[ind]-arr[ind-1]);
    int right=INT_MAX;
    if(ind>1){
        right=findminimumsteps(ind-2,arr,dp)+abs(arr[ind]-arr[ind-2]);
    }
    return dp[ind]=min(left,right);
}
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the heights of stairs: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n+1,0);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int firststep=dp[i-1]+abs(arr[i]-arr[i-1]);
        int secondstep=INT_MAX;
        if(i>1){
            secondstep=dp[i-2]+abs(arr[i]-arr[i-2]);
        }
    }
    int ans=findminimumsteps(n-1,arr,dp);
    cout<<"Minimum energy required to jump: "<<ans;
}