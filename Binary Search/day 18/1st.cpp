// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
//The overall run time complexity should be O(log (m+n))
// Input: nums1 = [1,3], nums2 = [2] Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.
#include<bits/stdc++.h>
using namespace std;
vector<int>mergearray(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>arr3(n+m);
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    return arr3;
}
double medianofarr(vector<int>&arr3){
    int s=arr3.size();
    if(s%2==1){
        return arr3[s/2];
    }else{
        return (arr3[s/2]+arr3[s/2-1])/2.0;
    }
}
int main(){
    int n;
    cout<<"Enter the size of first array: ";
    cin>>n;
    int m;
    cout<<"Enter the size of second array: ";
    cin>>m;
    vector<int>arr1(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>arr3=mergearray(arr1, arr2);
    cout<<"Merged Array: ";
    for(int x=0;x<n+m;x++){
        cout<<arr3[x]<<" ";
    }
    cout<<"\nMedian: "<<medianofarr(arr3);
}