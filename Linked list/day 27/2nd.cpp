//23. Merge k Sorted Lists
//Input: lists = [[1,4,5],[1,3,4],[2,6]] Output: [1,1,2,3,4,4,5,6]
//Input: lists = [] Output: []
//Better solution
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
Node*merge2lists(Node*t1,Node*t2){
    Node*dummynode=new Node(-1,nullptr);
    Node*temp=dummynode;
    while(t1!=nullptr&&t2!=nullptr){
        if(t1->data<t2->data){
            temp->next=t1;
            t1=t1->next;
        }else{
            temp->next=t2;
            t2=t2->next;
        }
        temp=temp->next;
    }
    if(t1)temp->next=t1;
    else temp->next=t2;
    return dummynode->next;
}
Node*mergeksortedll(vector<Node*>&lists){
    Node*head=lists[0];
    for(int i=1;i<lists.size();i++){
        head=merge2lists(head,lists[i]);
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
    cout<<"Enter the no of sorted array: ";
    cin>>n;
    vector<Node*>lists;
    while(n--){
        int m;
        cout<<"Enter the size of array: ";
        cin>>m;
        vector<int>arr(m);
        cout<<"Enter the elements of array: ";
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        Node*head=convertarr2ll(arr);
        lists.push_back(head);
        cout<<"Linked list is: ";
        print(head);
        cout<<endl;
    }
    Node*ans=mergeksortedll(lists);
    cout<<"Linked list after sorting all linked list: ";
    print(ans);
} 