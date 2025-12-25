//// Given an integer array nums of size n,
// return the majority(n/2times) element of the array.
//(optimal solution/moore's voting algorithm)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int element;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            element=arr[i];
        }
        else if(arr[i]==element){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element)cnt1++;
    }
    if(cnt1>n/2){
        cout<<"Majority element is: "<<element;
    }
    else{
        cout<<"there is no majority element: ";
    }
}