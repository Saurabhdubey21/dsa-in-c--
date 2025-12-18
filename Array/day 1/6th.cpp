//remove duplicates from sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i= 0;
    for(int j=1;j<n;j++){
        if (arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
        }
    }
    cout<<"new array: ";
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
}
