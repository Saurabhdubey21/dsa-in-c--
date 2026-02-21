//Find the smallest divisor in Given array
//Input: nums = [1, 2, 3, 4, 5], limit = 8 Output: 3
//Explanation: We can get a sum of 15(1 + 2 + 3 + 4 + 5) if we choose 1 as a divisor.
//Input: nums = [8,4,2,3], limit = 10 Output: 2
//Explanation: If we choose 1, we get 17 as the sum. 
//If we choose 2, we get 9 (4+2+1+2) <= 10 as the answer. So, 2 is the answer
#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>&arr,int m,int mid){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]+mid-1)/mid;
    }
    return sum;
}
int smallestdivisor(vector<int>&arr,int m){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(arr,m,mid)<=m){
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
    int m;
    cout<<"Enter the threshold value: ";
    cin>>m;
    int result=smallestdivisor(arr,m);
    cout<<"The smallest divisor in Given array: "<<result<<endl;
}