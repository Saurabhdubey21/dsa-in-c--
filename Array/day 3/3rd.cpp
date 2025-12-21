//find the number that appears once and other number apppear twice
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
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr= xorr ^ arr[i];
    }
    cout<<"The number which appear once is: "<<xorr;
}