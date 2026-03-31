//Doubly Linked list
//Deletion in Doubly linst
//deletion at kth element of doubly linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node*back;
    node(int data1,node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
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
node*removekthelement(node*head,int k){
    if(head==nullptr)return nullptr;
    int cnt=0;
    node*knode=head;
    while(knode!=nullptr){
        cnt++;
        if(cnt==k)break;
        knode=knode->next;
    }
    node*prev=knode->back;
    node*front=knode->next;
    //case1
    if(prev==nullptr&&front==nullptr){
        return nullptr;
    }
    //case 2 
    else if(prev==nullptr){
        head=front;
        front->back=nullptr;
        delete knode;
        return head;
    }//case 3
    else if(front==nullptr){
        prev->next=nullptr;
        delete knode;
        return head;
    }//case 4
    prev->next=front;
    front->back=prev;
    knode->next=nullptr;
    knode->back=nullptr;
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
    cout<<"Enter the kth index: ";
    cin>>k;
    node*head=convertarr2ll(arr);
    head=removekthelement(head,k);
    cout<<"New linked list after deletion: ";
    print(head);
}