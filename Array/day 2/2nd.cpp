//left rotate the array by one place
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
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<"New array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}