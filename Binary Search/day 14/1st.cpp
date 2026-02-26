//Aggressive Cows
//Input: n = 6, k = 4, nums = [0, 3, 4, 7, 10, 9] Output: 3
//You are given an array with unique elements of stalls[], which denote the positions of stalls.
//You are also given an integer k which denotes the number of aggressive cows.
//The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible
#include<bits/stdc++.h>
using namespace std;
bool canplace(vector<int>&arr,int k,int dis){
    int cntcows=1;
    int lastpos=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-lastpos>=dis){
            cntcows++;
            lastpos=arr[i];
        }
        if(cntcows>=k)return true;
    }
    return false;
}
int mindistance(vector<int>&arr,int k){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int maxdist=arr[n-1]-arr[0];
    int ans=0;
    for(int dis=1;dis<=maxdist;dis++){
        if(canplace(arr,k,dis)==true){
            continue;
        }else{
            return dis-1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the numbers of stalls: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the values of the stalls: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Numbers of cows for placed: ";
    cin>>k;
    int result=mindistance(arr,k);
    cout<<"Minimum distance between two consecutive stalls: "<<result<<endl;
}