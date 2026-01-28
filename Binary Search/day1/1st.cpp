//Search X in sorted array
//iterative method;
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr,int target,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]) low=mid+1;
        else{
            high =mid-1;
        }
    }
    return -1;
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
    cout<<"Enter the value of target: ";
    cin>>target;
    int result = binarySearch(arr, target, n);
    if (result !=-1)
        cout<<"Element found at index " << result;
    else
        cout <<"Element not found";
    return 0;
}