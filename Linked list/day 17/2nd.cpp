//Find length of Loop
// Given the head of a linked list,determine whether the list contains a loop
//If a loop is present,return the number of nodes in the loop, otherwise return 0.
//optimal solution
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
int findlength(Node*slow,Node*fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}
int findlooplength(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)return findlength(slow,fast);
    }
    return 0;
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
    int ans=findlooplength(head);
    cout<<"Length of loop is: "<<ans;
}