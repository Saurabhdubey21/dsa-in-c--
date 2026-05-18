//Delete the middle node in LL
//Input: head -> 1 -> 2 -> 3 -> 4 -> 5 Output: head -> 1 -> 2 -> 4 -> 5
//Input: head -> 7 -> 6 -> 5 -> 4 Output: head -> 7 -> 6 -> 4
//Optimal solution
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
Node*deletemiddlenode(Node*head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }
    Node*slow=head;
    Node*fast=head;
    fast=fast->next->next;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*middle=slow->next;
    slow->next=slow->next->next;
    delete(middle);
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
    cout<<"Enter th elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node*head=convertarr2ll(arr);
    cout<<"Linkedlist are: ";
    print(head);
    Node*ans=deletemiddlenode(head);
    cout<<"New linkedlist is: ";
    print(ans);
}