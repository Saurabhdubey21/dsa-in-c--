//Search insert position
//Given a sorted array of distinct integers and a target value,
//return the index if the target is found.
//If not, return the index where it would be if it were inserted in order.
#include<bits/stdc++.h>
using namespace std;
int insertposition(vector<int>&arr,int n,int num){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=num){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int result=insertposition(arr,n,num);
    arr.insert(arr.begin()+result,num);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}