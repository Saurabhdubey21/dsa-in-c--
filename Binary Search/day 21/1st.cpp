// Search a 2D Matrix
// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
//brute force solution
#include<bits/stdc++.h>
using namespace std;
bool search2dmatrix(vector<vector<int>>&matrix,int n,int m,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target)return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of row of matrix: ";
    cin>>n;
    int m;
    cout<<"Enter the column of Matrix: ";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the element of Matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"2d matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the target to find in matrix: ";
    cin>>target;
    int result=search2dmatrix(matrix,n,m,target);
    if(result)cout<<"target is found";
    else cout<<"Target was not found";
}