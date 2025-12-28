////Rearrange array elements by sign
//if number of +ve element != no of -ve element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrray: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>positive,negative;
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            positive.push_back(arr[i]);
        }
        else{
            negative.push_back(arr[i]);
        }
    }
    if(positive.size()>negative.size()){
        for(int i=0;i<negative.size();i++){
            arr[2*i]=positive[i];
            arr[2*i+1]=negative[i];
        }
        int index=2*negative.size();
        for(int i=negative.size();i<positive.size();i++){
            arr[index]=positive[i];
            index++;
        }
    }
    else{
        for(int i=0;i<positive.size();i++){
            arr[2*i]=positive[i];
            arr[2*i+1]=negative[i];
        }
        int index= 2*positive.size();
        for(int i=positive.size();i<negative.size();i++){
            arr[index]=negative[i];
            index++;
        }
    }
    cout<<"New rearrange array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}