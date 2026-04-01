//Doubly linked list
//insertion in doubly linked list
//insert an element before given node of doubly linked list
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
node* insertbeforenode(node* head,node* target,int val){
    if(target==head){
        node* newnode=new node(val);
        newnode->next=head;
        head->prev=newnode;
        return newnode;
    }
    node* back=target->prev;
    node* newnode=new node(val);
    newnode->next=target;
    newnode->prev=back;
    back->next=newnode;
    target->prev=newnode;
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
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    int target;
    cout<<"Enter the value of target that will be insert before node: ";
    cin>>target;
    node*head=convertarr2ll(arr);
    node*temp=head;
    while(temp!=nullptr&&temp->data!=target)temp=temp->next;
    if(temp!=nullptr)head=insertbeforenode(head,temp,val);
    print(head);
}