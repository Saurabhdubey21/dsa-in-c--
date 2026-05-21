//Delete all occurrences of a key in DLL
//Input: head -> 1 <-> 2 <-> 3 <-> 1 <-> 4, target = 1 Output: head -> 2 <-> 3 <-> 4
//optimal solution
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
    Node(int data1,Node*next1,Node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
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
Node*deletekeynode(Node*head,int x){
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==x){
            if(temp==head){
                head=head->next;
                head->prev=nullptr;
            }
            Node*nextnode=temp->next;
            Node*prevnode=temp->prev;    
            if(nextnode!=nullptr)nextnode->prev=prevnode;
            if(prevnode!=nullptr)prevnode->next=nextnode;
            delete(temp);
            temp=nextnode;
        }else{
            temp=temp->next;
        }
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
    cout<<"Enter the size of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node*head=convertarr2ll(arr);
    cout<<"Linkedlistare: ";
    print(head);
    int x;
    cout<<"\nEnter the value of x: ";
    cin>>x;
    Node*ans=deletekeynode(head,x);
    cout<<"\nNew linkedlist is: ";
    print(ans);
}