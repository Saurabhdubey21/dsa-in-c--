//set matrix zero
//Given an m x n integer matrix matrix
//if an element is 0, set its entire row and column to 0's.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row and column of array: ";
    cin>>n>>m;
    vector<vector<int>>arr(n, vector<int>(m));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2d array is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int>markrow(n,0);
    vector<int>markcol(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                markrow[i]=1;
                markcol[j]=1;
            }
        }
    }
//changed marked column in to -1
    for(int j=0;j<m;j++){
        if(markrow[j]==1){
            for(int i=0;i<n;i++){
                if(arr[i][j] != 0) {
                    arr[i][j]=-1;
                }
            }
        }
    }
    //changed marked row in to -1
    for(int i=0;i<n;i++){
        if(markrow[i]==1){
            for(int j=0;j<m;j++){
                if (arr[i][j] !=0){
                    arr[i][j]=-1;
                }
            }
        }
    }
    // for make all -1 elements in 0
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }
    cout<<"new array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}