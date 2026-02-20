//Minimum days to make M bouquets
//Input: n = 8, nums = [7, 7, 7, 7, 13, 11, 12, 7], m = 2, k = 3 Output: 12
//Explanation: On the 12th the first 4 flowers and the last 3 flowers would have already bloomed.
// So, we can easily make 2 bouquets, one with the first 3 and another with the last 3 flowers.
//Input: n = 5, nums = [1, 10, 3, 10, 2], m = 3, k = 2 Output: -1
//Explanation: If we want to make 3 bouquets of 2 flowers each, we need at least 6 flowers. 
//But we are given only 5 flowers, so, we cannot make the bouquets
#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>&arr,int mid,int m,int k){
    int n=arr.size();
    int cnt=0;
    int boquets=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=mid){
            cnt++;
        }else{
            boquets+=cnt/k;
            cnt=0;
        }
    }
    boquets+=cnt/k;
    return boquets;
}
int possibleday(vector<int>&arr,int m,int k){
    int high=*max_element(arr.begin(),arr.end());
    int low=*min_element(arr.begin(),arr.end());
    if((long long)m*k>arr.size())return -1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(arr,mid,m,k)>=m){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of days: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the the no of days: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the no of boquets: ";
    cin>>m;
    int k;
    cout<<"Enter the no fo consecutive flowers: ";
    cin>>k;
    int result=possibleday(arr,m,k);
    cout<<"Minimum days to make m bouquets: "<<result<<endl;
}