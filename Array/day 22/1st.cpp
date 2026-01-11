//Merge Overlapping Subintervals
//Given an array of intervals where intervals[i] = [starti, endi],
// merge all overlapping intervals and return an array of the non-overlapping intervals
//that cover all the intervals in the input.
//You can return the intervals in any order.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers of intervals: ";
    cin>>n;
    vector<vector<int>>intervals(n,vector<int>(2));
    cout<<"Enter the numbers of intervals: ";
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>merged;
    merged.push_back(intervals[0]);
    for(int i=1;i<n;i++){
        if(intervals[i][0]<=merged.back()[1]){
            merged.back()[1]= max(merged.back()[1],intervals[i][1]);
        }
        else{
            merged.push_back(intervals[i]);
        }
    }
    cout<<"Merged intervals: ";
    for(int i=0;i<merged.size();i++){
        cout<<"["<<merged[i][0]<<","<<merged[i][1]<<"]";
    }
    cout<<endl;
}