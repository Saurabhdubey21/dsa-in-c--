//Allocate Minimum Pages(brute force)
//Input: arr[] = [12, 34, 67, 90], k = 2 Output: 113 Explanation: Allocation can be done in following ways:
// => [12] and [34, 67, 90] Maximum Pages = 191
// => [12, 34] and [67, 90] Maximum Pages = 157
// => [12, 34, 67] and [90] Maximum Pages = 113.
// The third combination has the minimum pages assigned to a student which is 11
#include<bits/stdc++.h>
using namespace std;
int student(vector<int>&arr,int m,int pages){
    int n=arr.size();
    int students=1;
    int pagesperstudent=0;
    for(int i=0;i<n;i++){
        if(pagesperstudent+arr[i]<=pages){
            pagesperstudent+=arr[i];
        }else{
            students++;
            pagesperstudent=arr[i];
        }
    }
    return students;
}
int minpages(vector<int>&arr,int m,int n){
    int min=*max_element(arr.begin(),arr.end());
    int max=accumulate(arr.begin(),arr.end(),0);
    for(int pages=min;pages<max;pages++){
        if(student(arr,m,pages)==m){
            return pages;
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the number of pages: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the number of students: ";
    cin>>m;
    int result=minpages(arr,m,n);
    cout<<"Minimum pages per student is: "<<result;
}