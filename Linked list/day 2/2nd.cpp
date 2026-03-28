////Deletion of linked list 
//deletion of tail of linked list
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
node* convertarr2ll(vector<int>&arr){
    int n=arr.size();
    node*head=new node(arr[0],nullptr);
    node*mover=head;
    for(int i=1;i<n;i++){
        node*temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node*deletetail(node*head){
    if(head==nullptr||head->next==nullptr)return nullptr;
    node*temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elemnts of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node*head=convertarr2ll(arr);
    head=deletetail(head);
    cout<<"New tail of linked list: ";
    print(head);
}