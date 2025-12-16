//find second smallest element in array
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
    int smallest = arr[0];
    int secSmallest= INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest&&arr[i]<secSmallest){
            secSmallest=arr[i];
        }
    }

    cout<<"Second smaleest: "<<secSmallest;
}