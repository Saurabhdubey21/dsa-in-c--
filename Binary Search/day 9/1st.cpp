//Koko Eating Bananas
//Koko loves to eat bananas. There are n piles of bananas,
// the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
//Input: n = 4, nums = [7, 15, 6, 3], h = 8 Output: 5
//Explanation: If Koko eats 5 bananas/hr, he will take 2, 3, 2, and 1 hour to eat the piles accordingly.
// So, he will take 8 hours to complete all the piles. 
//brute force
#include<bits/stdc++.h>
using namespace std;
int totaltime(vector<int>&arr,int n,int h){
    int t=*max_element(arr.begin(),arr.end());
    for(int speed=1;speed<t;speed++){
        int hours=0;
        for(int i=0;i<n;i++){
            hours +=(arr[i]+speed-1)/speed;
        }
        if(hours<=h)return speed;
    }
    return t;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the no of bananas: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h;
    cout<<"Enter the hours: ";
    cin>>h;
    int result=totaltime(arr,n,h);
    cout<<"Minimum no of bananas per hour required to eat: "<<result;
}