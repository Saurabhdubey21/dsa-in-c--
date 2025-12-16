//find largest element of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest element: "<<largest;
}