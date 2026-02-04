//Count Occurrences in a Sorted Array
//You are given a sorted array of integers arr and an integer target. 
//Your task is to determine how many times target appears in arr.
//Return the count of occurrences of target in the array.
#include<bits/stdc++.h>
using namespace std;
int first(vector<int>& arr,int x){
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
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x;
    cout<<"Enter the tagrt: ";
    cin>>x;
    int firstval=first(arr,x);
    int lastval=last(arr,x);
    int answer=0;
    if(firstval !=-1){
        answer=(lastval-firstval)+1;
    }
    cout<<"Occcurances of x: "<<answer<<endl;
}