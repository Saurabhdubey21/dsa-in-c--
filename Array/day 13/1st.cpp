//find the longest consecutive numbers in array:
//brute force solution
#include<bits/stdc++.h>
using namespace std;
bool linearsearch(vector<int>&arr,int x){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x)
        return true;
    }
    return false;
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
    int longest =0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int cnt=1;
        while(linearsearch(arr,x+1)){
            x=x+1;
            cnt++;
        }
        longest=max(longest,cnt);
    }
    cout<<"Longest consecutive sequence length: "<<longest;
}