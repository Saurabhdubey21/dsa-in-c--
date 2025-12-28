//Rearrange array elements by sign(n/2 elements)
//optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n,0);
    int positive_index=0;
    int negative_index=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[positive_index]=arr[i];
            positive_index += 2;
        }
        else{
            ans[negative_index]=arr[i];
            negative_index += 2;
        }
    }
    cout<<"New rearrange array: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}