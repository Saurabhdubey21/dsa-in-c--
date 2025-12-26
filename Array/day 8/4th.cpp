//optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if (sum >maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"maximum sum of subarray: "<<maxi;
}