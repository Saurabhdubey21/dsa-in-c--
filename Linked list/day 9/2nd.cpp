//Sort a Linked List of 0's 1's and 2's
//Example 1 Input: linkedList = [1, 0, 2, 0 , 1]
//Output: [0, 0, 1, 1, 2]
//brute force approach
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int data1,node*next1){
        data=data1;
        next=next1;
    }
};
node*convertarr2ll(vector<int>&arr){
    node*head=new node(arr[0],nullptr);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
node*sortlinkedlist(node*head){
    if(head==nullptr||head->next==nullptr)return head;
    node*zerohead=new node(-1,nullptr);
    node*onehead=new node(-1,nullptr);
    node*twohead=new node(-1,nullptr);
    node*zero=zerohead;
    node*one=onehead;
    node*two=twohead;
    node*temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }else if(temp->data==1){
            one->next=temp;
            one=temp;
        }else{
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }
    zero->next=(onehead->next)?(onehead->next):twohead->next;
    one->next=twohead->next;
    two->next=nullptr;
    node*newhead=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return newhead;
}
void print(node*head){
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
    node*head=convertarr2ll(arr);
    cout<<"Old linkedlist: ";
    print(head);
    head=sortlinkedlist(head);
    cout<<"\nNew linkedlist: ";
    print(head);
}