//Minimize Max Distance to Gas Station
//We have a horizontal number line. On that number line, we have gas stations at positions stations[0], stations[1], ..., stations[n-1]. 
//Now, we add k more gas stations so that d, the maximum distance between adjacent gas stations, is minimized. 
//We have to find the smallest possible value of d. Find the answer exactly to 6 decimal places.
//Note: stations is in a strictly increasing order.
//Input: n = 10, arr = [1, 2, 3, 4, 5, 6 ,7, 8, 9, 10], k = 10 Output: 0.50000
//One of the possible ways to place 10 gas stations is [1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10].
//Thus the maximum difference between adjacent gas stations is 0.5.Hence, the value of dist is 0.5.
#include<bits/stdc++.h>
using namespace std;
int noofgasstation(vector<int>&arr,long double mid){
    int n=arr.size();
    int cnt=0;
    for(int i=1;i<n;i++){
        int numberinbetween=(arr[i]-arr[i-1])/mid;
        if(arr[i]-arr[i-1]==(mid*numberinbetween)){
            numberinbetween--;
        }
        cnt+=numberinbetween;
    }
    return cnt;
}
long double minimisemaxdistance(vector<int>&arr,int k){
    int n=arr.size();
    long double low=0,high=0;
    for(int i=0;i<n-1;i++){
        high=max(high,(long double)(arr[i+1]-arr[i]));
    }
    long double diff=1e-6;
    while(high-low>diff){
        long double mid=(low+high)/2.0;
        int cnt=noofgasstation(arr,mid);
        if(cnt>k){
            low=mid;
        }else{
            high=mid;
        }
    }
    return high;
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
    cout<<"Enter the no of gas station: ";
    cin>>k;
    long double result=minimisemaxdistance(arr,k);
    cout<<"The maximum difference between adjacent gas station is: "<<result;
}