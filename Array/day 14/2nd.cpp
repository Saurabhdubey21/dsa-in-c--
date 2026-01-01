//set matrix zero(better solution)
//Given an m x n integer matrix matrix
//if an element is 0, set its entire row and column to 0's
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the rows and column of 2d array: "<<endl;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of 2d array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2d array is: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int column[m]={0};
    int row[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=1;
                column[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||column[j]){
                arr[i][j]=0;
            }
        }
    }
    cout<<"New matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}