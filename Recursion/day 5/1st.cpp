//print subsequence of array
#include<bits/stdc++.h>
using namespace std;
void printsubsequence(int ind,vector<int>&arr,vector<int>&ans,int n){
    if(ind==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    printsubsequence(ind+1,arr,ans,n);
    ans.pop_back();
    printsubsequence(ind+1,arr,ans,n);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elemnts of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    printsubsequence(0,arr,ans,n);
}