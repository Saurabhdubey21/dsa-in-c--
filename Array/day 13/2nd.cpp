//find the longest consecutive numbers in array:
//optimal  solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int longest= 1, cnt=0 ,lastsmallest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]-1 == lastsmallest){
            cnt += 1;
            lastsmallest = arr[i];
        }
        else if(lastsmallest != arr[i]){
            cnt =1;
            lastsmallest =arr[i];
        }
        longest = max(longest,cnt);
    }
    cout<<"Longest consecutive array: "<<longest;
}