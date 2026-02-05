//Search X in sorted array
//Recursive method;
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&arr,int low,int high,int target){
    if(low>high)return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target)return mid;
    else if(target>arr[mid])return binarysearch(arr,mid+1,high,target);
    else return binarysearch(arr,low,mid-1,target);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the value of target: \n";
    cin>>target;
    int result=binarysearch(arr,0,n-1,target);
    if(result !=-1) cout<<"The no found at index at: "<<result;
    else cout<<"target was not found at: ";
    
}