//Length of linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1,node*next1){
        data=data1;
        next=next1;
    }
};
node* convertarr2ll(vector<int>&arr){
    node* head=new node(arr[0],nullptr);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthofll(node*head){
    int cnt=0;
    node*temp=head;
    while(temp){
        //cout<<temp->data<<" "<<endl;
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int>arr={2,3,4,5,65,7,8};
    node* head=convertarr2ll(arr);
    cout<<lengthofll(head);
}