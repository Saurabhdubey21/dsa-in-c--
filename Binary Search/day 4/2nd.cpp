//Search in rotated sorted array-II
//Given an integer array nums, 
//sorted in ascending order (may contain duplicate values) and a target value k.
// Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False.
#include<bits/stdc++.h>
using namespace std;
int findsorted(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)return mid;
        if(arr[mid]==arr[low]&&arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=x&&x<=arr[mid])high=mid-1;
            else low=mid+1;
        }else{
            if(arr[mid]<=x&&x<=arr[high])low=mid+1;
            else high=mid-1;
        }
    }
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
    int x;
    cout<<"Enter the number the target value: ";
    cin>>n;
    int result=findsorted(arr,x);
    cout<<"The number found at index: "<<result;
}