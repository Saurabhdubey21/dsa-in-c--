//find majority element of array
//optimal solution
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
    int cnt1=0,cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1 ==0 && el2 !=arr[i]){
            cnt1 =1;
            el1=arr[i];
        }
        else if(cnt2==0 && el1 !=arr[i]){
            cnt2 =1;
            el2=arr[i];
        }
        else if(arr[i]==el1) cnt1++;
        else if(arr[i]==el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }
    vector<int>lst;
    cnt1=0 ,cnt2=0;
    for(int i=0;i<n;i++){
        if(el1 ==arr[i]) cnt1++;
        if(el2 ==arr[i]) cnt2++;
    }
    int mini =(int)(n/3)+1;
    if(cnt1 >=mini) lst.push_back(el1);
    if(cnt2 >=mini) lst.push_back(el2);
    sort(lst.begin(),lst.end());
    cout<<"majority element: ";
    for(int x=0;x<lst.size();x++){
        cout<<lst[x]<<" ";
    }

}