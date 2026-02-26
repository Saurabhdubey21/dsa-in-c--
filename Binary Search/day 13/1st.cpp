//Kth Missing Positive Number
//Input: arr = [3, 5, 7, 10], k = 6 Output: 9
//Explanation:the missing numbers are [1, 2, 4, 6, 8, 9, 11, ...]. The 6ᵗʰ missing number is 9.
//Input: arr = [1, 4, 6, 8, 9], k = 3 Output: 5
//Explanation:The missing numbers are [2, 3, 5, 7, 10, ...]. The 3ʳᵈ missing number is 5.
#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>&arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k++;
        }else{
            break;
        }
    }
    return k;
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
    cout<<"Enter the kth missing number: ";
    cin>>k;
    int result=missingnumber(arr,k);
    cout<<"Kth missing number is: "<<result<<"\n";
}