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
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<"New array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}