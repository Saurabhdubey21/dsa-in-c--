// 3 sum(brute force solution)
//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]]
//such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//that the solution set must not contain duplicate triplets
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    n = arr.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    cout<<"3 numbers which returns zero are : ";
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
    }
}