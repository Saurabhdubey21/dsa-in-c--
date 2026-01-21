//Maximum Product Subarray in an Array
//Given an integer array nums. Find the subarray with the largest product,
// and return the product of the elements present in that subarray.
//Optimal solution;
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
    int ans=INT_MIN;
    int prefix=1;
    int suffix=1;
    for(int i=0;i<n;i++){
        if(prefix==0) prefix=1;
        if(suffix==0)suffix=1;
        prefix=prefix*arr[i];
        suffix=suffix*arr[n-i-1];
        ans=max(ans,max(suffix,prefix));
    }
    cout<<"Maximum product in subarray: "<<ans;
}