//Remove Nth Node From End of List
//Input: head = [1,2,3,4,5], n = 2 Output: [1,2,3,5]
//Optimal Solution
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
Node*deletekthnodefromtail(Node*head,int k){
    Node*fast=head;
    Node*slow=head;
    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    if(fast->next==nullptr){
        return head->next;
    }
    while(fast->next!=nullptr){
        fast=fast->next;
        slow=slow->next;
    }
    Node*deletenode=slow->next;
    slow->next=slow->next->next;
    delete(deletenode);
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
    int k;
    cout<<"Enter the kth node of linkedlist: ";
    cin>>k;
    Node*head=convertarr2ll(arr);
    cout<<"Old linked list: ";
    print(head);
    head=deletekthnodefromtail(head,k);
    cout<<"\nNew linkedlist: ";
    print(head);
}