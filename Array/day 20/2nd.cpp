//4 sum (better solution)
//Given an array nums of n integers, return an array of all the unique quadruplets 
//[nums[a], nums[b], nums[c], nums[d]] such that:
// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
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
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<int>hashset;
            for(int k=j+1;k<n;k ++){
                int sum=arr[i]+arr[j]+arr[k];
                int num=target-(sum);
                if(hashset.find(num) !=hashset.end()){
                    vector<int>temp={arr[i],arr[j],arr[k],num};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    cout<<"The numbers which returns target are: ";
    for(int x=0;x<ans.size();x++){
        for(int m=0;m<ans[x].size();m++){
            cout<<ans[x][m]<<" ";
        }
    }
}