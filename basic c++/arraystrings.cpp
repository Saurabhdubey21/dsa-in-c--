//arrays elements are stored in consecutive memories address
//but we not sure where it will first one will stored
//we can take ch arr(if output is charcter), long long arr,double arr
//whatever datatype all needs to same
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[1];
}