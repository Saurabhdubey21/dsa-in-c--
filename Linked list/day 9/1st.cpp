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
    int cnt0=0,cnt1=0,cnt2=0;
    node*temp=head;
    while(temp!=nullptr){
        if(temp->data==0)cnt0++;
        else if(temp->data==1)cnt1++;
        else cnt2++;
        temp=temp->next;
    }
    temp=head;
    while(cnt0--){
        temp->data=0;
        temp=temp->next;
    }
    while(cnt1--){
        temp->data=1;
        temp=temp->next;
    }
    while(cnt2--){
        temp->data=2;
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
    head=sortlinkedlist(head);
    cout<<"\nNew linkedlist: ";
    print(head);
}