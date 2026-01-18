//Find the repeating and missing number
//Given an integer array nums of size n containing values from [1, n]
// and each value appears exactly once in the array,
//except for A, which appears twice and B which is missing.
//Optimal solution(mathematical way)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sn= sum of n natural no
    //sn1= sum of square of n natural no;
    // x-y=S1-SN1
    //x2-y2=s2-sn2
    long long SN=(n*(n+1))/2;
    long long SN1=(n*(n+1)*(2*n+1))/6;
    long long S1=0;
    long long S2=0;
    for(int i=0;i<n;i++){
        S1 +=arr[i];
        S2 +=(long long)arr[i]*(long long)arr[i];
    }
    long long val1=S1-SN;//x-y
    long long val2=S2-SN1;
    val2=val2/val1; //x+y
    long long x=(val1+val2)/2;
    long long y=(val2-val1)/2;
    cout<<"Repeating number: "<<x<<endl;
    cout<<"Repeating Number: "<<y<<endl;
}