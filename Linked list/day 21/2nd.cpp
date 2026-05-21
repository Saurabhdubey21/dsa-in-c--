//Find Pairs with Given Sum in Doubly Linked List
//Input: head = [1, 2, 4, 5, 6, 8, 9], target = 7 Output: [[1, 6], [2, 5]]
//optimal solution
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
    Node(int data1,Node*next1,Node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node*convertarr2ll(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node*findtail(Node*head){
    Node*tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    return tail;
}
vector<pair<int,int>>pairswithsum(Node*head,int sum){
    vector<pair<int,int>>res;
    if(head==nullptr)return res;
    Node*left=head;
    Node*right=findtail(head);
    while(left->data<right->data){
        if(left->data+right->data==sum){
            res.push_back({left->data,right->data});
            left=left->next;
            right=right->prev;
        }else if(left->data+right->data<sum){
            left=left->next;
        }else{
            right=right->prev;
        }
    }
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
    int sum;
    cout<<"Enter the value of sum: ";
    cin>>sum;
    Node*head=convertarr2ll(arr);
    cout<<"Linked list are: ";
    print(head);
    vector<pair<int,int>>ans=pairswithsum(head,sum);
    cout<<"Pairs are: ";
    for(int x=0;x<ans.size();x++){
        cout<<ans[x].first<<","<<ans[x].second<<endl;
    }
}