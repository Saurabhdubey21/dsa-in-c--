//write a code for linear search in array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemenets of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number to search: ";
    cin>>num;
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            index= i;
            break;
        }
    }
    if(index !=-1)
    cout<<"Element found at index: "<<index;
    else
    cout<<"Element does not found at array ";
}