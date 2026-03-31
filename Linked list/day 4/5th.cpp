//Doubly Linked list
//Deletion in Doubly linst
//deletion at given node of doubly linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node*back;
    node(int data1,node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
node*convertarr2ll(vector<int>&arr){
    node*head=new node(arr[0]);
    node*prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
node*deletenode(node*head,int x){
    if(head==nullptr)return nullptr;
    node*temp=head;
    while(temp!=nullptr){
        if(temp->data==x){
            if(temp->back == nullptr && temp->next == nullptr){
                delete temp;
                return nullptr;
            }
            if(temp->back == nullptr){
                head = temp->next;
                head->back = nullptr;
                delete temp;
                return head;
            }
            if(temp->next == nullptr){
                temp->back->next = nullptr;
                delete temp;
                return head;
            }
            node* prev = temp->back;
            node* front = temp->next;

            prev->next = front;
            front->back = prev;

            delete temp;
            return head;
        }
        temp = temp->next;
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
    int x;
    cout<<"Enter the node: ";
    cin>>x;
    node*head=convertarr2ll(arr);
    head=deletenode(head,x);
    cout<<"New linked list after deletion: ";
    print(head);
}