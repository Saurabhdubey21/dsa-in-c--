//Given an array of integers nums and an integer target,(brute force solution)
//return indices of the two numbers such that they add up to target.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the sum of two numbers: ";
    cin>>target;
    bool found =false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Both index "<<i<<" "<<j<<endl;
                found=true;
            }
        }
    }
    if(!found){
        cout<<"there is no such elements in array:"; 
    return 0;
    }
}