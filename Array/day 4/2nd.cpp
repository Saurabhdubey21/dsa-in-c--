//find longest subarray with sum k (optimal solution) 2 pointer
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the elments of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long k;
    cout<<"Enter the value of k: ";
   cin>>k;
   int left=0;
   int right =0;
   long long sum=a[0];
   int maxlen=0;
   while(right<n){
    while(left <=right && sum>k){
        sum -=a[left];
        left++;
    }
    if(sum==k){
        maxlen=max(maxlen,right-left +1);
    }
    right++;
    if(right<n) sum +=a[right];
   }
   cout<<"subarray length: "<<maxlen;
}