//876. Middle of the Linked List
//Input: head = [1,2,3,4,5] Output: [3,4,5]
//Explanation: The middle node of the list is node 3.
//brute force
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
Node*middleoflinkedlist(Node*head){
    Node*temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    int midnode=(cnt/2)+1;
    temp=head;
    while(temp!=nullptr){
        midnode--;
        if(midnode==0){
            break;
        }
        temp=temp->next;
    }
    return temp;
}
void print(Node*head){
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
    Node*head=convertarr2ll(arr);
    cout<<"Linked list is: ";
    print(head);
    Node*ans=middleoflinkedlist(head);
    cout<<"Middle linkedlist are: ";
    print(ans);
}