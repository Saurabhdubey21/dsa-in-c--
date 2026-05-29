//148 sort a linked list
//Input: head = [4,2,1,3] Output: [1,2,3,4]
//Input: head = [-1,5,3,4,0] Output: [-1,0,3,4,5]
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
Node*sortll(Node*head){
    Node*temp=head;
    vector<int>ans;
    while(temp!=nullptr){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    sort(ans.begin(),ans.end());
    Node*res=convertarr2ll(ans);
    return res;
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
    Node*ans=sortll(head);
    cout<<"\nLinked list after sorting: ";
    print(ans);
}
