//4 sum (optimal solution)
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
    cout<<"enter the target value: ";
    cin>>target;
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j !=i+1 && arr[j]==arr[j-1])continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum= arr[i];
                sum +=arr[j];
                sum +=arr[k];
                sum +=arr[l];
                if(sum ==target){
                    vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]) k++;
                    while(k<l && arr[l]==arr[l+1]) l--;
                }
                else if(sum<target){
                    k++;
                }
                else { 
                    l--;
                }
            }
        }
    }
    cout<<"4 numbers which returns target are: ";
    for(int i=0; i<ans.size();i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
    }
}