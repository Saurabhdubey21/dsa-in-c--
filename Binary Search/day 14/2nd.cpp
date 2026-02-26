//Aggressive Cows
//Input: n = 6, k = 4, nums = [0, 3, 4, 7, 10, 9] Output: 3
//You are given an array with unique elements of stalls[], which denote the positions of stalls.
//You are also given an integer k which denotes the number of aggressive cows.
//The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible
#include<bits/stdc++.h>
using namespace std;
bool canplace(vector<int>&arr,int k,int mid){
    int cntcows=1;
    int lastpos=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-lastpos>=mid){
            cntcows++;
            lastpos=arr[i];
        }
        if(cntcows>=k)return true;
    }
    return false;
}
int mindistance(vector<int>&arr,int k){
    sort(arr.begin(),arr.end());
    int low=1;
    int high=arr.back()-arr.front();
    int ans=0;
    while (low<=high){
        int mid=low+(high-low)/2;
        if (canplace(arr,k,mid)){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of stalls: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of stalls: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the no of cows has to placed at minimum distance: ";
    cin>>k;
    int result=mindistance(arr,k);
    cout<<"Minimum distance between two consecutive stalls: "<<result<<endl;
}