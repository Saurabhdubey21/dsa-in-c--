//Remove duplicates from sorted DLL
//Input: head -> 1 <-> 1 <-> 3 <-> 3 <-> 4 <-> 5
//Output: head -> 1 <-> 3 <-> 4 <-> 5
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
    Node(int data1,Node*next1,Node*prev1){
        data=data1;
        prev=prev1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node*convertarr2ll(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node*deleteduplicates(Node*head){
    Node*temp=head;
    while(temp!=nullptr&&temp->next!=nullptr){
        Node*nextnode=temp->next;
        while(nextnode!=nullptr&&nextnode->data==temp->data){
            Node*duplicates=nextnode;
            nextnode=nextnode->next;
            free(duplicates);
        }
        temp->next=nextnode;
        if(nextnode!=nullptr)nextnode->prev=temp;
        temp=temp->next;
    }
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
    cout<<"Linked list is: ";
    print(head);
    Node*ans=deleteduplicates(head);
    cout<<"New linkedlist is: ";
    print(ans);
}