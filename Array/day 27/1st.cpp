//Maximum Product Subarray in an Array
//Given an integer array nums. Find the subarray with the largest product,
// and return the product of the elements present in that subarray.
//brute force approach
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
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int product=1;
            for(int k=i;k<j;k++){
                product=product*arr[k];
            }
            maxi=max(product,maxi);
        }
    }
    cout<<"longest subarray: "<<maxi;
}