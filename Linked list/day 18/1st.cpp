//Delete the middle node in LL
//Input: head -> 1 -> 2 -> 3 -> 4 -> 5 Output: head -> 1 -> 2 -> 4 -> 5
//Input: head -> 7 -> 6 -> 5 -> 4 Output: head -> 7 -> 6 -> 4
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
Node*deletemiddlenode(Node*head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }
    Node*temp=head;
    int n=0;
    while(temp!=nullptr){
        n++;
        temp=temp->next;
    }
    int res=n/2;
    temp=head;
    while(temp!=nullptr){
        res--;
        if(res==0){
            Node*middle=temp->next;
            temp->next=temp->next->next;
            delete(middle);
            break;
        }
        temp=temp->next;
    }
    return head;
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
    cout<<"Enter th elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node*head=convertarr2ll(arr);
    cout<<"Linkedlist are: ";
    print(head);
    Node*ans=deletemiddlenode(head);
    cout<<"New linkedlist is: ";
    print(ans);
}