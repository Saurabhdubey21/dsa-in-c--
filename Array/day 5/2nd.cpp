//Given an array of integers nums and an integer target,
//better solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the sum of two digit: ";
    cin>>target;
    map<int,int>mpp;
    bool found= false;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int moreneeded=target-a;
        if(mpp.find(moreneeded)!=mpp.end()){
            cout<<"Both index: "<<mpp[moreneeded]<<" "<<i<<endl;
            found=true;
        }
        mpp[a]=i;
    }
    if(!found){
        cout<<"no pair found: "<<endl;
    }
}