//find all the leaders in the array. 
//An element is considered a leader if it is greater than or equal to all elements to its right.
// The rightmost element is always a leader.
//optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    int maxi= INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
    cout<<"leaders of array: ";
    for(int i=0;i<ans.size();i++){
    cout <<ans[i]<<" ";
    }
}