// A peak element is an element that is strictly greater than its neighbors.
// Given a 0-indexed integer array nums, find a peak element, and return its index. 
//If the array contains multiple peaks, return the index to any of the peaks.
// You may imagine that nums[-1] = nums[n] = -∞. In other words,
// an element is always considered to be strictly greater than a neighbor that is outside the array.
#include<bits/stdc++.h>
using namespace std;
int peakelements(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        if((i==0||arr[i-1]<arr[i])&&(i==n-1||arr[i]>arr[i+1]))return arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the lements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=peakelements(arr,n);
    cout<<"peak elements: "<<result;
}