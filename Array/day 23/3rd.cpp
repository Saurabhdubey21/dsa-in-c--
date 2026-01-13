//Merged two sorted array
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.
//optimal solution
#include<bits/stdc++.h>
using namespace std;
void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int i, int j) {
    if (arr1[i] > arr2[j]) {
        swap(arr1[i], arr2[j]);
    }
}
void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int len= n+m;
    int gap = (len / 2) + (len % 2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            if(left<n && right>=n){
                swapIfGreater(arr1,arr2,left,right -n);
            }
            else if(left >=n){
                swapIfGreater(arr2,arr2,left -n,right -n);
            }
            else{
                swapIfGreater(arr1,arr1,left,right);
            }
            left++ ,right++;
        }
        if(gap ==1) break;
        gap=(gap/2)+(gap%2);
    }
}
int main(){
    int n;
    cout<<"Enter the size of first array: ";
    cin>>n;
    int m;
    cout<<"Enter the size of second array: ";
    cin>>m;
    vector<int>arr1(n);
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    mergeArrays(arr1, arr2);
    cout << "Merged array: ";
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
}