//intersection of two sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the size of array 1: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elemnts of array 1: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the size of array 2: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elemnts of array 2: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0; 
    int j=0;
    vector<int>ans;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[i]<arr1[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout<<"Final array: ";
    for (int x : ans) {
        cout << x << " ";
    }
}