//Kth Missing Positive Number
//Input: arr = [3, 5, 7, 10], k = 6 Output: 9
//Explanation:the missing numbers are [1, 2, 4, 6, 8, 9, 11, ...]. The 6ᵗʰ missing number is 9.
//Input: arr = [1, 4, 6, 8, 9], k = 3 Output: 5
//Explanation:The missing numbers are [2, 3, 5, 7, 10, ...]. The 3ʳᵈ missing number is 5.
#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>&arr,int k){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k)low=mid+1;
        else high=mid-1;
    }
    return {high+k+1};
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
    int k;
    cout<<"Enter the Kth number: ";
    cin>>k;
    int result=missingnumber(arr,k);
    cout<<"The Kth missing number is: "<<result<<endl;
}