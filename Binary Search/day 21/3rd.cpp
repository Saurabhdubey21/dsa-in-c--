// Search a 2D Matrix
// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
//optimal solution
#include<bits/stdc++.h>
using namespace std;
bool binarysearch(vector<vector<int>>&matrix,int n,int m,int target){
    int low=0,high=n*m-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row=mid/m;
        int column=mid%m;
        if(matrix[row][column]==target)return true;
        else if(matrix[row][column]>target)high=mid-1;
        else{
            low=mid+1;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the row of matrix: ";
    cin>>n;
    int m;
    cout<<"Enter the column of matrix: ";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the elments of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"2d matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    int target;
    cout<<"Enter the number which has to found in matrix: ";
    cin>>target;
    int result=binarysearch(matrix,n,m,target);
    if(result)cout<<"Target has found in matrix: ";
    else cout<<"Target was not found: ";
}