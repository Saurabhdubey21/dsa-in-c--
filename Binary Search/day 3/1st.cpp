//Given an array of integers nums sorted in non-decreasing order,
// find the starting and ending position of a given target value.
//If target is not found in the array, return [-1, -1].
//brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the sizeof array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the size of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1)first=i;
            last=i;
        }
    }
    cout<<"First occurance of number: "<<" "<<first<<"last :"<<last;
}