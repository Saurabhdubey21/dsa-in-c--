//insertion in linked list
//insert element before given value
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
node*insertvalue(node*head,int el,int val){
    if(head==nullptr){
        return nullptr;
    }
    if(head->data==val){
        node*temp=new node(el,head);
        return temp;
    }
    node*temp=head;
    while(temp->next!=nullptr){
        if(temp->next->data==val){
            node*newnode=new node(el,nullptr);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
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
    int val;
    cout<<"Enter the value which is given in linked list: ";
    cin>>val;
    int el;
    cout<<"Enter the value of el which will insert before val: ";
    cin>>el;
    node*head=convertarr2ll(arr);
    head=insertvalue(head,el,val);
    cout<<"After insertion of value new linkedlist: ";
    print(head);
}