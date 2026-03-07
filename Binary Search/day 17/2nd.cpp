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
long double minimisemaxdistance(vector<int>&arr,int k){
    int n=arr.size();
    vector<int>howmany(n-1,0);
    priority_queue<pair<long double,int>>pq;
    for(int i=0;i<n-1;i++){
        long double maxdistance=arr[i+1]-arr[i];
        pq.push({maxdistance,i});
    }
    for(int gasstation=1;gasstation<=k;gasstation++){
        auto top=pq.top();
        pq.pop();
        int segmentindex=top.second;
        howmany[segmentindex]++;
        long double totaldistance=arr[segmentindex+1]-arr[segmentindex];
        long double newlength=totaldistance/(howmany[segmentindex]+1);
        pq.push({newlength,segmentindex});
    }
    return pq.top().first;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the no of gas station: ";
    cin>>k;
    int result=minimisemaxdistance(arr,k);
    cout<<"The maximum difference between adjacent gas stations is: "<<result;
}