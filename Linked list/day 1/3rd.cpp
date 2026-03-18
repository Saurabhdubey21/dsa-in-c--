//Converts array in to linkedlist
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int data1,node*next1){
        data=data1;
        next=next1;
    }
};
node* convertarr2ll(vector<int>&arr){
    node*head=new node(arr[0],nullptr);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    vector<int>arr={12,2,3,4,5,6};
    node*head=convertarr2ll(arr);
    cout<<head->data;
}