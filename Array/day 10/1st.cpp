//Rearrange array elements by sign
//brute force solution
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
    vector<int> positive,negative;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive.push_back(arr[i]);
        }
        else{
            negative.push_back(arr[i]);
        }
    }
    //it will , if there is no equal no of positive and negative element
    // after the iteration extra positve and negative no will be out
    for(int i=0;i<n/2;i++){
        arr[2*i]=positive[i];
        arr[2*i+1]=negative[i];
    }
    cout<<"New array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}