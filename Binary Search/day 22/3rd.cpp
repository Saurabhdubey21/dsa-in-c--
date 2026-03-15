//Search in 2D matrix - II
// Input: matrix = [ [1, 4, 7, 11, 15], [2, 5, 8, 12, 19], [3, 6, 9, 16, 22], [10, 13, 14, 17, 24], [18, 21, 23, 26, 30] ],
// target = 5 Output: True Explanation: The target 5 exists in the matrix in the index (1,1)
#include<bits/stdc++.h>
using namespace std;
bool searchinmatrix(vector<vector<int>>&matrix,int n,int m,int target){
    int row=0,col=m-1;
    while(row<n &&col>=0){
        if(matrix[row][col]==target)return true;
        else if(matrix[row][col]<target){
            row++;
        }else{
            col--;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of row of matrix: ";
    cin>>n;
    int m;
    cout<<"Enter the no of column of matrix: ";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"2D maatrix is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the target: ";
    cin>>target;
    int result=searchinmatrix(matrix,n,m,target);
    if(result!=-1)cout<<"The target was found: "<<endl;
    else cout<<"Target was not found in matrix";
}