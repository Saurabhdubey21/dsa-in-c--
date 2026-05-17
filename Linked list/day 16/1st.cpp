//141. Linked List Cycle
// Given head, the head of a linked list, 
// determine if the linked list has a cycle in it.
// There is a cycle in a linked list if there is some node in the list 
//that can be reached again by continuously following the next pointer.
//brute force
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
bool findloop(Node*head){
    map<Node*,int>mpp;
    Node*temp=head;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return true;
        }else{
            mpp[temp]=1;
        }
        temp=temp->next;
    }
    return false;
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
    cout<<"Linked list are: ";
    print(head);
    bool ans=findloop(head);
    if(ans){
        cout<<"Loop detected.";
    }else{
        cout<<"Loop not detected.";
    }
}