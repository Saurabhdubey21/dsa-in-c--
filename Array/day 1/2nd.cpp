//find smallest number in array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"smallest: "<<smallest;
}