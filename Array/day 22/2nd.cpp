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
    vector<vector<int>>intervals(n,vector<int>(2));
    cout<<"Enter the intervals of array: ";
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int start= intervals[i][0];
        int end=intervals[i][1];
        if(! ans.empty() && end <=ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(intervals[j][0]<=end){
                end=max(end,intervals[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    cout<<"Merged overlapping of intervals: ";
    for(int i=0;i<ans.size();i++){
        cout<<"["<<ans[i][0]<<" "<<ans[i][1]<<"]";
    }
}