//Deletion of linked list 
//deletion of value of linked list
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
void print(node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node*removeelement(node*head,int m){
    if(head==nullptr)return head;
    if(head->data==m){
        node*temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    node*temp=head;
    node*prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==m){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
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
    int m;
    cout<<"Enter the value: ";
    cin>>m;
    node*head=convertarr2ll(arr);
    head=removeelement(head,m);
    cout<<"New node after deletion of m value element: ";
    print(head);
}