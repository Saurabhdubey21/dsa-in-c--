//Capacity to Ship Packages Within D Days
//Input: weights = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], days = 5 Output: 15
//Explanation: Minimum ship capacity = 15. One way to ship in 5 days, Day 1: 1 + 2 + 3 + 4 + 5 = 15,Day 2: 6 + 7 = 13,Day 3: 8
//Day 4: 9,Day 5: 10
//Input: weights = [3, 2, 2, 4, 1, 4], days = 3 Output: 6
//One possible division with capacity 6: Day 1: 3 + 2 = 5 Day 2: 2 + 4 = 6 Day 3: 1 + 4 = 5
//Optimal Solution
#include<bits/stdc++.h>
using namespace std;
int sum_days(vector<int>&arr,int D){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int maxdays(vector<int>&arr,int D,int mid){
    int n=arr.size();
    int load=0;
    int days=1;
    for(int i=0;i<n;i++){
        if(load+arr[i]<=mid){
            load+=arr[i];
        }
        else{
            days++;
            load=arr[i];
        }
    }
    return days;
}
int leastday(vector<int>&arr,int D){
    int low=*max_element(arr.begin(),arr.end());
    int high=sum_days(arr,D);
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        int requdays=maxdays(arr,D,mid);
        if(requdays<=D){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the no of days: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the weights of per day package: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int D;
    cout<<"Enter the maxdays: ";
    cin>>D;
    int result=leastday(arr,D);
    cout<<"Capacity to ship package within in D days is: "<<result;
}