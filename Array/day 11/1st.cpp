//Next Permutation
//A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
//For example, for arr = [1,2,3], 
//the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind = -1;
    for(int i=n-2;i>=0;i--){
        if (arr[i]<arr[i+1]){
            ind = i;
            break; 
        }
    }
    if(ind == -1){
        reverse(arr.begin(),arr.end());
    }
    else{
        for(int i= n-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1, arr.end());
    }
    cout<<"Next permutation number: ";
    for(int x: arr){
        cout<<x<<" ";
    }
}