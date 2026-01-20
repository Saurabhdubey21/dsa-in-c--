//Given an array of numbers, you need to return the count of reverse pairs. 
//Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].
//optimal solution
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right =mid +1;
    while (left<=mid && right<=high) {
        if (arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
int countPairs(vector<int>&arr,int low,int mid,int high){
    int right=mid +1;
    int cnt=0;
    for (int i=low;i<=mid;i++){
        while (right<=high&&arr[i]>(long long)2*arr[right]) right++;
        cnt +=(right-(mid + 1));
    }
    return cnt;
}
int mergeSort(vector<int>&arr,int low,int high){
    int cnt=0;
    if (low >=high) return cnt;
    int mid =(low + high)/2 ;
    cnt +=mergeSort(arr,low,mid);
    cnt +=mergeSort(arr,mid +1,high);
    cnt +=countPairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
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
    int cnt=mergeSort(arr, 0, n - 1);
    cout << "Reverse count: " << cnt << endl;
}