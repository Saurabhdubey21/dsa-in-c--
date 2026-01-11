//Merge Overlapping Subintervals
//Given an array of intervals where intervals[i] = [starti, endi],
// merge all overlapping intervals and return an array of the non-overlapping intervals
//that cover all the intervals in the input.
//You can return the intervals in any order.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of intervals: ";
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(2));
    cout<<"Enter the intervals: ";
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    cout<<"Merged intervals: ";
    for(int i=0;i<ans.size();i++){
        cout<<"["<<ans[i][0]<<" "<<ans[i][1]<<"]";
    }
}