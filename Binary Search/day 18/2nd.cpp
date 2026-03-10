// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
//The overall run time complexity should be O(log (m+n))
// Input: nums1 = [1,3], nums2 = [2] Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.
#include<bits/stdc++.h>
using namespace std;
double median(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size(),m=arr2.size();
    int i=0,j=0;
    int s=(n+m);
    int index2=s/2;
    int index1=index2-1;
    int cnt=0;
    int ind1element=-1,ind2element=-1;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            if(cnt==index1)ind1element=arr1[i];
            if(cnt==index2)ind2element=arr1[i];
            cnt++;
            i++;
        }else{
            if(cnt==index1)ind1element=arr2[j];
            if(cnt==index2)ind2element=arr2[j];
            cnt++;
            j++;
        }
    }
    while(i<n){
        if(cnt==index1)ind1element=arr1[i];
        if(cnt==index2)ind2element=arr1[i];
        cnt++;
        i++;
    }
    while(j<m){
        if(cnt==index1)ind1element=arr2[j];
        if(cnt==index2)ind2element=arr2[j];
        cnt++;
        j++;
    }
    if(s%2==1){
        return ind2element;
    }return (ind1element+ind2element)/2.0;
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
    double result=median(arr1,arr2);
    cout<<"Median of given array: "<<result;
}