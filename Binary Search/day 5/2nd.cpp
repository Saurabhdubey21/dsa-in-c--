// Find out how many times the array is rotated
// Given an integer array nums of size n, sorted in ascending order with distinct values. /
//The array has been right rotated an unknown number of times, between 0 and n-1 (including).
//Determine the number of rotations performed on the array.
#include<bits/stdc++.h>
using namespace std;
int totalrotation(vector<int>&arr,int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            low=mid+1;
        }else{
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
            high=mid-1;
        }
    }
    return index;
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
    int result=totalrotation(arr,n);
    cout<<"Total rotatiion: "<<result;
}