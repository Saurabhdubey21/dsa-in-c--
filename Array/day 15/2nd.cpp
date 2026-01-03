//rotate matrix by 90 degrees right
//n*n matrix
//optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of matrix: ";
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(n));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Input matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    cout<<"New matrix after rotation: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
} 