// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
//The overall run time complexity should be O(log (m+n))
// Input: nums1 = [1,3], nums2 = [2] Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.
#include<bits/stdc++.h>
using namespace std;
int medianofarray(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    if(n>m)return medianofarray(arr2,arr1);
    int low=0,high=n;
    int left=(n+m+1)/2;
    int s=n+m;
    while(low<=high){
        int mid1=(low+high)/2;
        int mid2=left-mid1;
        int l1=INT_MIN,l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;
        if(mid1<n)r1=arr1[mid1];
        if(mid2<m)r2=arr2[mid2];
        if(mid1-1>=0)l1=arr1[mid1-1];
        if(mid2-1>=0)l2=arr2[mid2-1];
        if(l1<=r2&&l2<=r1){
            if((n+m)%2==1)return max(l1,l2);
            return (double)(max(l1,l2)+min(r1,r2))/2.0;
        }else if(l1>r2){
            high=mid1-1;
        }else{
            low=mid1+1;
        }
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
    cout<<"Enter the elemnts of array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int result=medianofarray(arr1,arr2);
    cout<<"The median of two sorted array: "<<result<<endl;
}