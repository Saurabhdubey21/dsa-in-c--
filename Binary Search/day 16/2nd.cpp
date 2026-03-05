//Split Array Largest Sum
//Given an integer array a of size n and an integer k. 
//Split the array a into k non-empty subarrays such that the largest sum of any subarray is minimized. 
//Return the minimized largest sum of the split.
// Input: a = [1, 2, 3, 4, 5], k = 3 Output:6
#include<bits/stdc++.h>
using namespace std;
int sumofsubarray(vector<int>&arr,int k,int mid){
    int n=arr.size();
    int sum=0;
    int splitnumber=1;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }else{
            splitnumber++;
            sum=arr[i];
        }
    }
    return splitnumber;
}
int largestsum(vector<int>&arr,int k){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int noofsplits=sumofsubarray(arr,k,mid);
        if(noofsplits>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
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
    cout<<"The split array largest sum: "<<result<<endl;

}