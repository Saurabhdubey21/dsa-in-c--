//Count Subarrays with given XOR(optmal solution)
//Given an array of integers arr[] and a number k, 
//count the number of subarrays having XOR of their elements as k
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int cnt=0;
    int xorr=0;
    map<int,int>mpp;
    mpp[xorr]++;
    for(int i=0;i<n;i++){
        xorr= xorr^arr[i];
        int x=xorr^k;
        cnt+= mpp[x];
        mpp[xorr]++;
    }
    cout<<"number of subarrays having XOR of their elements as k: "<<cnt;
}
