//Given an integer array nums,
// find the subarray with the largest sum 
//and return the sum of the elements present in that subarray
//brute force solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum= INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum +=arr[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"Maximum sum of subarray: "<<maxsum;
    return 0;
}