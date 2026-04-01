//Doubly linked list
//insertion in doubly linked list
//insert an element before kth element of doubly linked list
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
node*insertatkthnode(node*head,int k,int x){
    if(k==1){
        node* newnode=new node(x);
        newnode->next=head;
        if(head!=nullptr)head->prev=newnode;
        return newnode;
    }
    node*temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
    node*back=temp->prev;
    node*newnode=new node(x,temp,back);
    back->next=newnode;
    temp->prev=newnode;
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
    int k;
    cout<<"Enter the index no: ";
    cin>>k;
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    node*head=convertarr2ll(arr);
    head=insertatkthnode(head,k,x);
    cout<<"New linkedlist after insertion before head: ";
    print(head);
}