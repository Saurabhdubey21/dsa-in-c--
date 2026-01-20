//Given an array of numbers, you need to return the count of reverse pairs. 
//Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].
//brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>2*(arr[j])) cnt++;
        }
    }
    cout<<"Total no of pairs: "<<cnt;
}