//Add one to a number represented by LL
//Input: head -> 1 -> 2 -> 3 Output: head -> 1 -> 2 -> 4
//Explanation: The number represented by the linked list = 123. 123 + 1 = 124.
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
};
Node*convertarr2ll(vector<int>&arr){
    Node*head=new Node(arr[0],nullptr);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node*reverselinkedlist(Node*head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    Node*temp=head;
    Node*prev=nullptr;
    while(temp!=nullptr){
        Node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
Node*addoneinlinkedlist(Node*head){
    head=reverselinkedlist(head);
    Node*temp=head;
    int carry=1;
    while(temp!=nullptr){
        temp->data=temp->data+carry;
        if(temp->data<10){
            carry=0;
            break;
        }else{
            temp->data=0;
            carry=1;
        }
        temp=temp->next;
    }
    if(carry==1){
        Node*newnode=new Node(1,nullptr);
        head=reverselinkedlist(head);
        newnode->next=head;
        return newnode;
    }
    head=reverselinkedlist(head);
    return head;   
}
void print(Node*head){
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
    Node*head=convertarr2ll(arr);
    cout<<"Old Linked list: ";
    print(head);
    head=addoneinlinkedlist(head);
    cout<<"\nNew Linked list: ";
    print(head);
}