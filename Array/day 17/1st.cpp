//find the subarray with sum k
//brute force solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int x=i;x<=j;x++){
                sum +=arr[x];
            }
            if (sum==k){
                cnt++;
            }
        }
    }
    cout<<"largest subarray: "<<cnt;
}