//Maximum Product Subarray in an Array
//Given an integer array nums. Find the subarray with the largest product,
// and return the product of the elements present in that subarray.
//better solution
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
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=i;j<n;j++){
            product =product*arr[j];
            maxi=max(maxi,product);
        }
    }
    cout<<"Maximaum product of subarray: "<<maxi;
}