//Given an array of integers nums sorted in non-decreasing order,
// find the starting and ending position of a given target value.
//If target is not found in the array, return [-1, -1].
//You must write an algorithm with O(log n) runtime complexity.
#include<bits/stdc++.h>
using namespace std;
int first(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            ans=mid;
            high=mid-1;
        }else if(arr[mid]>x){ 
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int last(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            ans=mid;
            low=mid+1;
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the size of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    int firstval=first(arr,x);
    int lastval=last(arr,x);
    cout<<"first index at no found is: "<<firstval<<" "<<"second index at no found is: "<<lastval;
}