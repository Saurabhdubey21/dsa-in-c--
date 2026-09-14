//print subsequences whose sum is K
#include<bits/stdc++.h>
using namespace std;
void printsubsequence(int ind,vector<int>&ans,int sum,vector<int>&arr,int n,int k){
    if(ind==n){
        if(sum==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(arr[ind]);
    sum+=arr[ind];
    printsubsequence(ind+1,ans,sum,arr,n,k);
    ans.pop_back();
    sum-=arr[ind];
    printsubsequence(ind+1,ans,sum,arr,n,k);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"The value of k is: ";
    cin>>k;
    vector<int>ans;
    printsubsequence(0,ans,0,arr,n,k);
}