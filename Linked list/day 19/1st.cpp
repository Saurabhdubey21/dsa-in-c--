//142. Linked List Cycle II
//find staring point of circular linkedlist
//Input: head = [3,2,0,-4], pos = 1
//Input: head = [1,2], pos = 0 Output: tail connects to node index 0
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
Node*startingofll(Node*head){
    Node*temp=head;
    map<Node*,int>mpp;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return nullptr;
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
    Node*ans=startingofll(head);
    if(ans!=nullptr){
        cout<<"Starting point: "<<ans->data;
    }else{
        cout<<"it is linear linked list.";
    }
}