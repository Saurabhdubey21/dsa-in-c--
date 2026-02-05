//Search in rotated sorted array-I
// Given an integer array nums,
// sorted in ascending order (with distinct values) and a target value k.
//The array is rotated at some pivot point that is unknown. 
//Find the index at which k is present and if k is not present return -1.
#include<bits/stdc++.h>
using namespace std;
int findnumsorted(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
      while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=x&&x<=arr[mid])high=mid-1;
            else low=mid+1;
        }else{
            if(arr[mid]<=x&&x<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
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
    int x;
    cout<<"Enter the target: ";
    cin>>x;
    int result=findnumsorted(arr,x);
    cout<<"The number will find at index: "<<result;
}