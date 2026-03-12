//Find row with maximum 1's
//brute force
#include<bits/stdc++.h>
using namespace std;
int findmaximumones(vector<vector<int>>&arr,int n,int m){
    int cntmax=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count_ones=0;
        for(int j=0;j<m;j++){
            count_ones+=arr[i][j];
        }
        if(count_ones>cntmax){
            cntmax=count_ones;
            index=i;
        }
    }
    return index;
}
int main(){
    int n;
    cout<<"Enter the row of 2d array: ";
    cin>>n;
    int m;
    cout<<"Enter the coloumn of 2d array: ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2d array is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int result=findmaximumones(arr,n,m);
    cout<<"Row with maximum 1's is: "<<result<<endl;
}