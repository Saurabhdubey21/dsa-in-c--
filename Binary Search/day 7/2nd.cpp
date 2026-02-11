// A peak element is an element that is strictly greater than its neighbors.
// Given a 0-indexed integer array nums, find a peak element, and return its index. 
//If the array contains multiple peaks, return the index to any of the peaks.
// You may imagine that nums[-1] = nums[n] = -∞. In other words,
// an element is always considered to be strictly greater than a neighbor that is outside the array.
// You must write an algorithm that runs in O(log n) time.
#include<bits/stdc++.h>
using namespace std;
int peakelements(vector<int>&arr,int n){
    if(n==1)return arr[0];
    if(arr[0]>arr[1])return arr[1];
    if(arr[n-1]>arr[n-2])return arr[n-1];
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])return arr[mid];
        else if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=peakelements(arr,n);
    cout<<"Peak element: "<<result<<endl;
}