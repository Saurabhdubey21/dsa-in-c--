//Minimum days to make M bouquets
//Input: n = 8, nums = [7, 7, 7, 7, 13, 11, 12, 7], m = 2, k = 3 Output: 12
//Explanation: On the 12th the first 4 flowers and the last 3 flowers would have already bloomed.
// So, we can easily make 2 bouquets, one with the first 3 and another with the last 3 flowers.
//Input: n = 5, nums = [1, 10, 3, 10, 2], m = 3, k = 2 Output: -1
//Explanation: If we want to make 3 bouquets of 2 flowers each, we need at least 6 flowers. 
//But we are given only 5 flowers, so, we cannot make the bouquets
#include<bits/stdc++.h>
using namespace std;
int possibleday(vector<int>&arr,int days,int m,int k){
    int n=arr.size();
    int cnt=0;
    int boquets=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=days){
            cnt++;
        }else{
            boquets+=cnt/k;
            cnt=0;
        }
    }
    boquets+=cnt/k;
    return boquets;
}
int mindays(vector<int>&arr,int m,int k){
    int maxi=*max_element(arr.begin(),arr.end());
    for(int days=0;days<=maxi;days++){
        if(possibleday(arr,days,m,k)>=m)return days;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the no of days: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the day number in which flowers got bloomed: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the no of boquets: ";
    cin>>m;
    int k;
    cout<<"Enter the no of consecutive flowers: ";
    cin>>k;
    int result=mindays(arr,m,k);
    cout<<"Minimum days that required to flower bloomed: "<<result<<endl;
}