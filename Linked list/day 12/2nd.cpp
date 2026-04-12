//Check linked list is palindrome
//Input: head = [1,2,2,1] Output: true
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
Node*reverselinkedlist(Node*head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    Node*newhead=reverselinkedlist(head->next);
    Node*front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
}
bool checkpalindrome(Node*head){
    if(head==nullptr||head->next==nullptr)return true;
    Node*slow=head;
    Node*fast=head;
    while(fast->next!=nullptr&&fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*newhead=reverselinkedlist(slow->next);
    Node*first=head;
    Node*second=newhead;
    while(second!=nullptr){
        if(first->data!=second->data){
            reverselinkedlist(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverselinkedlist(newhead);
    return true;
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
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node*head=convertarr2ll(arr);
    cout<<"Old linkedlist: ";
    print(head);
    cout<<endl;
    if(checkpalindrome(head))cout<<"Yes it is palindrome: ";
    else cout<<"No it is not palindrome: ";
}
