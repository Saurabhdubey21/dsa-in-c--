//Merged two sorted array
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.
//better solution
#include<bits/stdc++.h>
using namespace std;
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
    int left=n-1;
    int right =0;
    while(left >=0 && right <=m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left --,right++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    cout<<"Merged array: \n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
}