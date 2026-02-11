// Given an array nums sorted in non-decreasing order. 
//Every number in the array except one appears twice. 
//Find the single number in the array.
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
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!=arr[i+1])ans=arr[i];
        }
        else if(i==n-1){
            if(arr[i]!=arr[i-1])ans=arr[i];
        }
        else{
            if(arr[i] !=arr[i-1]&&arr[i]!=arr[i+1])ans=arr[i];
        }
    }
    cout<<"The no which appeared at once is: "<<ans;
}
