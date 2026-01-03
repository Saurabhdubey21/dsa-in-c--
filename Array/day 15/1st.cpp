//rotate a matrix by 90 degree
//brute force solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of matrix "<<endl;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Input matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    vector<vector<int>>ans(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][n-1-i]=arr[i][j];
        }
    }
    cout<<"Matrix after rotation: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
}