//Find Peak Element - II
// Given a 0-indexed n x m matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and
// return the array [i, j].A peak element in a 2D grid is an element that is strictly greater than all of 
//its adjacent neighbours to the left, right, top, and bottom.
// Assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.
//Input: mat=[[10, 20, 15], [21, 30, 14], [7, 16, 32]] Output: [1, 1]
#include<bits/stdc++.h>
using namespace std;
int findmaxindex(vector<vector<int>>&arr,int n,int m,int col){
    int maxvalue=-1;
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i][col]>maxvalue){
            maxvalue=arr[i][col];
            index=i;
        }
    }
    return index;
}
pair<int,int>findpeakelement(vector<vector<int>>&arr,int n,int m){
    int low=0,high=m-1;
    while(low<=high){
        int mid=(low+high)/2;
        int maxrowindex=findmaxindex(arr,n,m,mid);
        int left=mid-1 >=0? arr[maxrowindex][mid-1]:-1;
        int right=mid+1 <m? arr[maxrowindex][mid+1]:-1;
        if(arr[maxrowindex][mid]>left&&arr[maxrowindex][mid]>right){
            return{maxrowindex,mid};
        }else if(arr[maxrowindex][mid]<left){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return{-1,-1};
}
int main(){
    int n;
    cout<<"Enter the number of roww: ";
    cin>>n;
    int m;
    cout<<"Enter the size of array: ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D matrix is: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    pair<int,int>result=findpeakelement(arr,n,m);
    cout<<"The index where peak element is found at: "<<result.first<<" "<<result.second;
}