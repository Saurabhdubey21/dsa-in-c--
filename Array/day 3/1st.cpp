//finding missing number of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"enter the size of array: ";
    cin>>N;
    vector<int>arr(N-1);
    cout<<"Enter the element of array: ";
    for(int i=0;i<N-1;i++){
        cin>>arr[i];
    }
    int xor1 =0;
    int xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    int missingnum= xor1^xor2;
    cout<<"enter the missing number: "<<missingnum;
}