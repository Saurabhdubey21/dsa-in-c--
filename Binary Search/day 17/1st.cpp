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
int minimisemaxdistance(vector<int>&arr,int k){
    int n=arr.size();
    vector<int>totaldistance(n-1,0);
    for(int gasstation=1;gasstation<=k;gasstation++){
        long double maxdistance=-1;
        int maxindex=-1;
        for(int i=0;i<n-1;i++){
            long double diff=arr[i+1]-arr[i];
            long double maxdistancelength=diff/(totaldistance[i]+1.0);
            if(maxdistancelength>maxdistance){
                maxdistance=maxdistancelength;
                maxindex=i;
            }
        }
        totaldistance[maxindex]++;
    }
    long double maxans=-1;
    for(int i=0;i<n-1;i++){
        long double diff=arr[i+1]-arr[i];
        long double maxdistancelength=diff/(totaldistance[i]+1.0);
        maxans=max(maxans,maxdistancelength); 
    }
    return maxans;
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
    cout<<"Enter the total no of station: ";
    cin>>k;
    int result=minimisemaxdistance(arr,k);
    cout<<"maximum difference between adjacent gas stations is: "<<result;
}