//Search in 2D matrix - II
// Input: matrix = [ [1, 4, 7, 11, 15], [2, 5, 8, 12, 19], [3, 6, 9, 16, 22], [10, 13, 14, 17, 24], [18, 21, 23, 26, 30] ],
// target = 5 Output: True Explanation: The target 5 exists in the matrix in the index (1,1)
#include<bits/stdc++.h>
using namespace std;
pair<int,int>searchmatrix(vector<vector<int>>&matrix,int n,int m,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target)return{i,j};
        }
    }
    return {-1,-1};
}
int main(){
    int n;
    cout<<"Enter the number of row of matrix: ";
    cin>>n;
    int m;
    cout<<"Enter the column of matrix: ";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter the elemets of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"2D matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the value of target: ";
    cin>>target;
    pair<int,int>result=searchmatrix(matrix,n,m,target);
    if(result.first!=-1)cout<<"Target has found in matrix at: "<<result.first<<","<<result.second;
    else{
        cout<<"Target does not find\n";
    }
}