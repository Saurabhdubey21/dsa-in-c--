//Given an array arr, rotate the array by one position in clockwise direction.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    cout<<"New array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}