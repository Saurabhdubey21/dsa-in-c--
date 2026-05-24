//61. Rotate List k times
//Input: head = [1,2,3,4,5], k = 2 Output: [4,5,1,2,3]
//Input: head = [0,1,2], k = 4 Output: [2,0,1]
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
Node*findnthnode(Node*temp,int k){
    int cnt=1;
    while(temp!=nullptr){
        if(cnt==k)return temp;
        cnt++;
        temp=temp->next;
    }
    return temp;
}
Node*rotatellktimes(Node*head,int k){
    if(head==nullptr||k==0)return head;
    int len=1;
    Node*tail=head;
    while(tail->next!=nullptr){
        len++;
        tail=tail->next;
    }
    k=k%len;
    if(k%len==0)return head;
    tail->next=head;
    Node*newlastnode=findnthnode(head,len-k);
    head=newlastnode->next;
    newlastnode->next=nullptr;
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
    cout<<"Enter the value of k: ";
    cin>>k;
    Node*head=convertarr2ll(arr);
    cout<<"Linked list is:  ";
    print(head);
    Node*ans=rotatellktimes(head,k);
    cout<<"New linkedlist after k time rotation: ";
    print(ans);
}