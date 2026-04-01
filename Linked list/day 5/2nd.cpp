//Doubly linked list
//insertion in doubly linked list
//insert an element before tail of doubly linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
    node(int data1,node*next1,node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
node*convertarr2ll(vector<int>&arr){
    node*head=new node(arr[0]);
    node*prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
node*insertbeforetail(node*head,int x){
    if(head->next==nullptr){
        return insertbeforetail(head,x);
    }
    node*tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    node*back=tail->prev;
    node*newhead=new node(x,tail,back);
    back->next=newhead;
    tail->prev=newhead;
    return head;
}
void print(node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the eleemnts of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    node*head=convertarr2ll(arr);
    head=insertbeforetail(head,x);
    cout<<"New linked list is: ";
    print(head);
}