////Deletion of linked list 
//deletion of kth elements of linked list
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
node*deletekthelement(node*head,int k){
    if(head==NULL)return head;
    if(k==1){
        node*temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    int cnt=0;
    node*temp=head;
    node*prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
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
    int k;
    cout<<"Enter the Kth elements that will be deleted: ";
    cin>>k;
    node*head=convertarr2ll(arr);
    head=deletekthelement(head,k);
    cout<<"New linked list: ";
    print(head);
}