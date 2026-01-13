//Merged two sorted array
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.
//brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of first array: \n";
    cin>>n;
    cout<<"Enter the size of second array: \n";
    cin>>m;
    vector<int>arr1(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>arr3(n+m);
    int left =0;
    int right =0;
    int index=0;
    while(left<n && right<m){
        if(arr1[left] <=arr2[right]){
            arr3[index] =arr1[left];
            left++,index++;
        }
        else{
            arr3[index]=arr2[right];
            right++,index++;
        }
    }
    while(left<n){
        arr3[index ++]= arr1[left++];
    }
    while(right<m){
        arr3[index ++]=arr2[right ++];
    }
    for(int i=0;i<n+m;i++){
        if(i<n) arr1[i]==arr3[i];
        else arr2[i-n] =arr3[i];
    }
    cout<<"Merged sorted array:\n";
    for(int i =0;i<n+m;i++) {
        cout<<arr3[i]<<" ";
    }
}