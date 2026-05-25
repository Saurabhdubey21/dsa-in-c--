//21. Merge Two Sorted Lists
//Input: list1 = [1,2,4], list2 = [1,3,4] Output: [1,1,2,3,4,4]
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
Node*merge2sortedll(Node*head1,Node*head2){
    Node*t1=head1;
    Node*t2=head2;
    Node*dummynode=new Node(-1,nullptr);
    Node*temp=dummynode;
    while(t1!=nullptr&&t2!=nullptr){
        if(t1->data<t2->data){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }else{
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
    }
    if(t1)temp->next=t1;
    else temp->next=t2;
    return dummynode->next;
}
void print(Node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int n;
    cout<<"Enter the size of 1st array: ";
    cin>>n;
    vector<int>arr1(n);
    cout<<"Enter the elements of 1st array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of 2nd array: ";
    cin>>m;
    vector<int>arr2(m);
    cout<<"Enter the elements of 2nd array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    Node*head1=convertarr2ll(arr1);
    cout<<"1st Linked list is: ";
    print(head1);
    Node*head2=convertarr2ll(arr2);
    cout<<"\n2nd linked lsit is: ";
    print(head2);
    Node*result=merge2sortedll(head1,head2);
    cout<<"\nNew Linked list after merge: ";
    print(result);
}