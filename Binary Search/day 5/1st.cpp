// Find minimum in Rotated Sorted Array
//Given an integer array nums of size N, sorted in ascending order with distinct values, 
//and then rotated an unknown number of times (between 1 and N), find the minimum element in the array.
//Input : nums = [4, 5, 6, 7, 0, 1, 2, 3]Output: 0
#include<bits/stdc++.h>
using namespace std;
int smallestnum(vector<int>&arr,int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[mid]);
            low=mid+1;
        }else{
            high=mid-1;
            ans=min(ans,arr[mid]);
        }
    }
    return ans;
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
    int result=smallestnum(arr,n);
    cout<<"The lowest no of array: "<<result;
}