//Doubly Linked list
//Deletion in Doubly linst
//deletion at tail of doubly linked list
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
node*removetail(node*head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }
    node*tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    node*newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
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
    cout<<"Enter the size of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node*head=convertarr2ll(arr);
    head=removetail(head);
    cout<<"after the deletion of tail new linked list: ";
    print(head);
}