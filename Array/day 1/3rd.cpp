//find second largest number in array
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<" size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest&&arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    cout<<"second largest element: "<<secondlargest;
}