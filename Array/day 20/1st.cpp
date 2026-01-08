//4 sum (brute force)
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
    cout<<"Enter the value of target: ";
    cin>>target;
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int m=k+1;m<n;m++){
                    long long sum= arr[i]+arr[j];
                    sum +=arr[k];
                    sum +=arr[m];
                    if(sum ==target){
                        vector<int>temp={arr[i],arr[j],arr[k],arr[m]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    cout<<"The elements which returns the target are: ";
    for(int x=0;x<ans.size();x++){
        for(int l=0;l<ans[x].size();l++){
            cout<<ans[x][l]<<" ";
        }
    }
}