//Allocate Minimum Pages(Optimal solution)
//Input: arr[] = [12, 34, 67, 90], k = 2 Output: 113 Explanation: Allocation can be done in following ways:
// => [12] and [34, 67, 90] Maximum Pages = 191
// => [12, 34] and [67, 90] Maximum Pages = 157
// => [12, 34, 67] and [90] Maximum Pages = 113.
// The third combination has the minimum pages assigned to a student which is 11
#include<bits/stdc++.h>
using namespace std;
int student(vector<int>&arr,int m,int mid){
    int n=arr.size();
    int students=1;
    int pagesperstudent=0;
    for(int i=0;i<n;i++){
        if(arr[i]+pagesperstudent<=mid){
            pagesperstudent+=arr[i];
        }else{
            students++;
            pagesperstudent=arr[i];
        }
    }
    return students;
}
int minimumpages(vector<int>&arr,int m,int n){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    if(m>n)return -1;
    while(low<=high){
        int mid=(low+high)/2;
        int noofstudents=student(arr,m,mid);
        if(noofstudents>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the no of pages: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the no of stuents: ";
    cin>>m;
    int result=minimumpages(arr,m,n);
    cout<<"Minimum pages for each student: "<<result;
}