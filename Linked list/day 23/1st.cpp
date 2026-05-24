//25. Reverse Nodes in k-Group
//Input: head = [1,2,3,4,5], k = 2 Output: [2,1,4,3,5]
//Input: head = [1,2,3,4,5], k = 3 Output: [3,2,1,4,5]
#include<bits/stdc++.h>
using namespace std;
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
Node*findkthnode(Node*temp,int k){
    k-=1;
    while(temp!=nullptr&&k>0){
        k--;
        temp=temp->next;
    }
    return temp;
}
Node*reverselinkedlist(Node*head){
    Node*prev=nullptr;
    Node*curr=head;
    while(curr!=nullptr){
        Node*front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
Node*reversellgroupwise(Node*head,int k){
    Node*temp=head;
    Node*prevlast=nullptr;
    while(temp!=nullptr){
        Node*kthnode=findkthnode(temp,k);
        if(kthnode==nullptr){
            if(prevlast)prevlast->next=temp;
            break;
        }
        Node*nextnode=kthnode->next;
        kthnode->next=nullptr;
        reverselinkedlist(temp);
        if(temp==head){
            head=kthnode;
        }else{
            prevlast->next=kthnode;
        }
        prevlast=temp;
        temp=nextnode;
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
    int k;
    cout<<"Enter the value of group: ";
    cin>>k;
    Node*head=convertarr2ll(arr);
    cout<<"Linked list is: ";
    print(head);
    Node*ans=reversellgroupwise(head,k);
    cout<<"New linkedlist: ";
    print(ans);
}