//best time to sell and buy stock
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the stock price per days: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini= arr[0];
    int maxProfit =0;
    for(int i=0; i<n;i++){
        int cost =arr[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,arr[i]);
    }
    cout<<"Maximum return of day: "<<maxProfit;
}