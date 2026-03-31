// insertion in linkedlist
//insert the element at kth index;.0
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
node*insertelement(node*head,int val,int k){
    if(head==nullptr){
        if(k==1) return new node(val,nullptr);
        else return nullptr;
    }
    if(k==1){
        node*temp=new node(val,head);
        return temp;
    }
    int cnt=0;
    node*temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            node*newnode=new node(val,nullptr);
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
    cout<<"Enter the value to insert in linked list: ";
    cin>>val;
    int k;
    cout<<"Enter the value of kth position: ";
    cin>>k;
    node*head=convertarr2ll(arr);
    head=insertelement(head,val,k);
    cout<<"After insertiion of element at kth position new linkedlist is: ";
    print(head);
}