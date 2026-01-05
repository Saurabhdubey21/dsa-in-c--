//majority element in array[n/3]
//better solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>lst;
    map<int,int>mpp;
    int mini =(int)(n/3)+1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==mini){
            lst.push_back(arr[i]);
        }
        if(lst.size()==2) break;
    }
    sort(lst.begin(),lst.end());
    cout<<"Majority element in givrn array is: ";
    for(int x=0;x<lst.size();x++){
        cout<<lst[x]<<" ";
    }
}