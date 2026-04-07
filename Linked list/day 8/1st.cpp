//Odd Even Linked List
// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]
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
node*oddeven(node*head){
    if(head==nullptr)return head;
    vector<int>arr;
    node*temp=head;
    int index=1;
    while(temp!=nullptr){
        if(index%2==1){
            arr.push_back(temp->data);
        }
        temp=temp->next;
        index++;
    }
    temp=head;
    index=1;
    while(temp!=nullptr){
        if(index%2==0){
            arr.push_back(temp->data);
        }
        temp=temp->next;
        index++;
    }
    temp=head;
    int i=0;
    while(temp!=nullptr){
        temp->data=arr[i++];
        temp=temp->next;
    }
    return head;
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
    head = oddeven(head);
    cout<<"Odd-Even Linked List: ";
    print(head);
}
