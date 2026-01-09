//Count Subarrays with given XOR(brute force solution)
//Given an array of integers arr[] and a number k, 
//count the number of subarrays having XOR of their elements as k
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"the value of k is: ";
    cin>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xorr=0;
            for(int m=i;m<=j;m++){
                xorr=xorr^arr[m];
                if(xorr == k)cnt++;
            }
        }
    }
    cout<<"number of subarrays having XOR of their elements as k: "<<cnt;
}