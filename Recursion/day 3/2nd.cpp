//reverse the array
//using recursive method by one parameter
#include<bits/stdc++.h>
using namespace std;
void reversearray(vector<int>&arr,int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reversearray(arr,i+1,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearray(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}