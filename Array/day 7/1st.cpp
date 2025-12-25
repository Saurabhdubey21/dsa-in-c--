// Given an integer array nums of size n,
// return the majority(n/2times) element of the array.
//(brute force solution)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            cout<<"Majority element is: "<<arr[i];
            return 0;
        }
    }
    cout<<"No majority element is found";
}