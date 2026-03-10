// Kth element of 2 sorted arrays
// Given two sorted arrays a and b of size m and n respectively. Find the kth element of the final sorted array 
//Example 1 Input: a = [2, 3, 6, 7, 9], b = [1, 4, 8, 10], k = 5 Output: 6
// Explanation: The final sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.
#include<bits/stdc++.h>
using namespace std;
int kthelement(vector<int>&arr1,vector<int>&arr2,int k){
    int n=arr1.size();
    int m=arr2.size();
    if(n>m)return kthelement(arr2,arr1,k);
    int low=max(k-m,0),high=min(k,n);
    int left=k;
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
            return max(l1,l2);
        }else if(l1>r2){
            high=mid1-1;
        }else{
            low=mid1+1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the first array: ";
    cin>>n;
    int m;
    cout<<"Enter the size of second array: ";
    cin>>m;
    vector<int>arr1(n);
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int k;
    cout<<"Enter the kth element of both sorted array: ";
    cin>>k;
    int result=kthelement(arr1,arr2,k);
    cout<<"Kth element of sorted element is: "<<result<<endl;
}