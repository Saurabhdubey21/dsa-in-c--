//rotate the array from dth index
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter the rotation value: ";
    cin>>d;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    cout<<"New array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}