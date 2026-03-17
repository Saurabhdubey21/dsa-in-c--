//Matrix Median
//Given a 2D array matrix that is row-wise sorted. The task is to find the median of the given matrix.
//Input: matrix=[ [1, 4, 9], [2, 5, 6], [3, 7, 8] ] Output: 5
//Explanation: If we find the linear sorted array, the array becomes 1 2 3 4 5 6 7 8 9. So, median = 5
// input: matrix=[ [1, 3, 8], [2, 3, 4], [1, 2, 5] ] Output: 3
// Explanation: If we find the linear sorted array, the array becomes 1 1 2 2 3 3 4 5 8. So, median = 3
#include<bits/stdc++.h>
using namespace std;
int medianofmatrix(vector<vector<int>>&arr,int n,int m){
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans.push_back(arr[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int s=ans.size();
    return ans[s/2];
}
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the no of column: ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int result=medianofmatrix(arr,n,m);
    cout<<"Median of 2d matrix is: "<<result<<endl;
}