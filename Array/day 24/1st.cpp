//Find the repeating and missing number
//Given an integer array nums of size n containing values from [1, n]
// and each value appears exactly once in the array,
//except for A, which appears twice and B which is missing.
//brute force solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: \n";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int repeating=-1;
    int missing=-1;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if (arr[j]==i) cnt++;
        }
        if(cnt ==2) repeating=i;
        else if(cnt==0) missing=i;
        if(repeating !=-1 && missing !=-1) break;
    }
    cout<<"Repeating number: "<<repeating<<endl;
    cout<<"Missing number: "<<missing;
}