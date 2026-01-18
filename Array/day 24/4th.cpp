//Find the repeating and missing number
//Given an integer array nums of size n containing values from [1, n]
// and each value appears exactly once in the array,
//except for A, which appears twice and B which is missing.
//Optimal solution(xor method)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int XORR=0;
    for(int i=0;i<n;i++){
        XORR=XORR ^arr[i];
        XORR=XORR ^(i+1);
    }
    int bitNo=0;
    while(1){
       if((XORR &(1<<bitNo)) !=0){
        break;
       }
       bitNo ++;
    }
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if((arr[i] &(1<<bitNo))!=0){
            one=one ^arr[i];
        }
        else{
            zero=zero^arr[i];
        }
    }
    for(int i = 1; i <= n; i++){
        if(i & (1 << bitNo))
            one ^= i;
        else
            zero ^= i;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==zero) cnt++;
    }
    if(cnt==2){
        cout<<"Repeating no: "<<zero<<endl;
        cout<<"Missing no: "<<one<<endl;
    }
    else{
        cout<<"Repeating  no: "<<one<<endl;
        cout<<"Missing No: "<<zero<<endl;
    }
    return 0;
}