//Find row with maximum 1's
//brute force
#include<bits/stdc++.h>
using namespace std;
int maxones(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int findmaximumones(vector<vector<int>>&arr,int n,int m){
    int cntmax=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count_ones=m-maxones(arr[i],m,1);
         if(count_ones>cntmax){
            cntmax=count_ones;
            index=i;
        }
    }
    return index;
}
int main(){
    int n;
    cout<<"Enter the size of row: ";
    cin>>n;
    int m;
    cout<<"Enter the size of colummn: ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D array is: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int result=findmaximumones(arr,n,m);
    cout<<"Row with maximum ones is: "<<result;
}