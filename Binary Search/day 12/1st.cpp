//Capacity to Ship Packages Within D Days
//Input: weights = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], days = 5 Output: 15
//Explanation: Minimum ship capacity = 15. One way to ship in 5 days, Day 1: 1 + 2 + 3 + 4 + 5 = 15,Day 2: 6 + 7 = 13,Day 3: 8
//Day 4: 9,Day 5: 10
//Input: weights = [3, 2, 2, 4, 1, 4], days = 3 Output: 6
//One possible division with capacity 6: Day 1: 3 + 2 = 5 Day 2: 2 + 4 = 6 Day 3: 1 + 4 = 5
//brute force
#include<bits/stdc++.h>
using namespace std;
int maxdays(vector<int>&arr,int D){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int canship(vector<int>&arr,int D,int capacity){
    int n=arr.size();
    int days=1;
    int load=0;
    for(int i=0;i<n;i++){
        if(load+arr[i]<=capacity){
            load+=arr[i];
        }else{
            days++;
            load=arr[i];
        }
    }
    return days;
}
int leastday(vector<int>&arr,int D){
    int n=arr.size();
    int maxi=*max_element(arr.begin(),arr.end());
    int end=maxdays(arr,D);
    for(int capacity=maxi;capacity<=end;capacity++){
        if(canship(arr,D,capacity)<=D){
            return capacity;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the total days: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the weight of per day packages: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int D;
    cout<<"Enter the taotal days to transfer all packages: ";
    cin>>D;
    int result=leastday(arr,D);
    cout<<"The least weight for a day: "<<result;
}