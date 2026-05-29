//148 sort a linked list
//Input: head = [4,2,1,3] Output: [1,2,3,4]
//Input: head = [-1,5,3,4,0] Output: [-1,0,3,4,5]
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
Node*findmiddle(Node*head){
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node*merge2ll(Node*list1,Node*list2){
    Node*dummy=new Node(-1,nullptr);
    Node*temp=dummy;
    while(list1!=nullptr&&list2!=nullptr){
        if(list1->data<list2->data){
            temp->next=list1;
            temp=list1;
            list1=list1->next;
        }else{
            temp->next=list2;
            temp=list2;
            list2=list2->next;
        }
    }
    if(list1)temp->next=list1;
    else temp->next=list2;
    return dummy->next;
}
Node*sortll(Node*head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    Node*middle=findmiddle(head);
    Node*right=middle->next;
    middle->next=nullptr;
    Node*left=head;
    left=sortll(left);
    right=sortll(right);
    return merge2ll(left,right);
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
    Node*ans=sortll(head);
    cout<<"\nLinked list after sorting: ";
    print(ans);
}