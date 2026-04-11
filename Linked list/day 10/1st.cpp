//Remove Nth Node From End of List
//Input: head = [1,2,3,4,5], n = 2 Output: [1,2,3,5]
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
void print(Node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node*deletekthnodefromtail(Node*head,int k){
    int cnt=0;
    Node*temp=head;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    if(k==cnt){
        Node*Newhead=head->next;
        free(head);
        return Newhead;
    }
    int res=cnt-k;
    temp=head;
    while(temp!=nullptr){
        res--;
        if(res==0)break;
        temp=temp->next;
    }
    Node*deleteNode=temp->next;
    temp->next=temp->next->next;
    delete(deleteNode);
    return head;
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
    cout<<"Enter the k of node linkedlist: ";
    cin>>k;
    Node*head=convertarr2ll(arr);
    cout<<"Old linkedlist: ";
    print(head);
    head=deletekthnodefromtail(head,k);
    cout<<"\n New linked list after deleetion: ";
    print(head);
}