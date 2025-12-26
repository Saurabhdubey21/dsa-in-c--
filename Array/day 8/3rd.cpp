//Optimal solution
//Given an integer array nums,
// find the subarray with the largest sum 
//and return the sum of the elements present in that subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int start=0 ,ansstart=0,ansend=0;
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        if(sum == 0) start=i;
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;
        }
        if (sum<0){
            sum=0;
        }
    }
    cout<<"Maximum sum is:"<<maxi<<endl;
    cout<<"Maximum sum subarray is: ";
    for(int i=ansstart;i<=ansend;i++){
        cout<<arr[i]<<" ";
    }
}