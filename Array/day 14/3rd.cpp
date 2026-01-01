//set matrix zero(optimal solution)
//Given an m x n integer matrix matrix
//if an element is 0, set its entire row and column to 0's
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows and column of matrix: "<<endl;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Input matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int col[n]={0};//matrix[0][...]
    int row[m]={0};//matrix[...][0]
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                //mark the ith row
                arr[i][0]=0;
                //mark th jth row
                if(j !=0)
                arr[0][j]=0;
                else 
                col0=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] !=0){
                if(arr[0][j]==0 || arr[i][0]==0){
                    arr[i][j]=0;
                }
            }
        }
    }
    if(arr[0][0]==0){
        for(int j=0;j<m;j++) arr[0][j]=0;
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            arr[i][0]=0;
        }
    }
    cout<<"New matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}