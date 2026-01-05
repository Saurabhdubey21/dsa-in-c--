//majority element [n/3 elements]
//brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>lst;
    for(int i=0;i<n;i++){
        int already = 0;
        for(int k=0; k<lst.size(); k++){
            if(lst[k] == arr[i]){
                already = 1;
                break;
            }
        }
        if(already) continue;
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }        
        if (cnt>n/3)
        lst.push_back(arr[i]);
    }
    cout<<"Majority element: ";
    for(int x=0;x<lst.size();x++){
        cout<<lst[x]<<" ";
    }
}