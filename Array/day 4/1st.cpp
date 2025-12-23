//find longest subarray with sum k
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> a(n);
    cout<<"enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    map<long long,int>preSum;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSum.find(rem) !=preSum.end()){
           int len= i- preSum[rem];
           maxLen=max(maxLen,len); 
        }
        if (preSum.find(sum)==preSum.end()){
        preSum[sum]=i;
        }
    }
    cout<<"longest Subarray: "<<maxLen;
}