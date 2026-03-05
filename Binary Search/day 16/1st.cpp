//Split Array Largest Sum
//Given an integer array a of size n and an integer k. 
//Split the array a into k non-empty subarrays such that the largest sum of any subarray is minimized. 
//Return the minimized largest sum of the split.
// Input: a = [1, 2, 3, 4, 5], k = 3 Output:6
#include<bits/stdc++.h>
using namespace std;
int sumofsubarray(vector<int>&arr,int k,int value){
    int n=arr.size();
    int sum=0;
    int splitnumber=1;
    for(int i=0;i<n;i++){
        if(arr[i]+sum<=value){
            sum+=arr[i];
        }else{
            splitnumber++;
            sum=arr[i];
        }
    }
    return splitnumber;
}
int largestsum(vector<int>&arr,int k){
    int mini=*max_element(arr.begin(),arr.end());
    int max=accumulate(arr.begin(),arr.end(),0);
    for(int value=mini;value<max;value++){
        if(sumofsubarray(arr,k,value)==k){
            return value;
        }
    }
    return mini;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int result=largestsum(arr,k);
    cout<<"Largest split subarray sum: "<<result<<endl;
}