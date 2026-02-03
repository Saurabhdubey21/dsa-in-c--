//Given an unsorted array arr[] of integers and an integer x,
// find the floor and ceiling of x in arr[].
//Floor of x is the largest element which is smaller than or equal to x.
// Floor of x doesn’t exist if x is smaller than smallest element of arr[].//
//Ceil of x is the smallest element which is greater than or equal to x.
//Ceil of x doesn’t exist if x is greater than greatest element of arr[].
#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int ceil(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=arr[mid];
            high=mid-1;
        }
        else{
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
    cout<<"Enter the elments of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int floorval=floor(arr,x);
    int ceilval=ceil(arr,x);
    cout<<"The value of ceil: "<<ceilval<<" "<<"The value of floor: "<<floorval;
}
