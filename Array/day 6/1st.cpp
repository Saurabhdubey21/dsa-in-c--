//Given an array nums consisting of only 0,1,or2.
// Sort the array in non-decreasing order.
//better solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int cnt=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) cnt++;
        else if(arr[i]==1) cnt1++; 
        else cnt2++; 
    } 
    for(int i=0;i<cnt;i++){ 
        arr[i]=0; 
    } 
    for(int i=cnt;i<cnt+cnt1;i++){
        arr[i]=1; 
    } 
    for(int i=cnt+cnt1;i<n;i++){ 
        arr[i]=2; 
    } 
    cout<<"sorted array: "; 
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" "; 
    } 
}