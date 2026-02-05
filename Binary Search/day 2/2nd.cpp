//Implement Upper Bound
//Given a sorted array arr[] and a number target,
//the task is to find the upper bound of the target in this given array.
#include<bits/stdc++.h>
using namespace std;
int upperbound(vector<int>&arr,int n,int target){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
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
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int result=upperbound(arr,n,target);
    if(result==n)cout<<"target was not found: "<<endl;
    else cout<<"Target was found at index: "<<result;
}