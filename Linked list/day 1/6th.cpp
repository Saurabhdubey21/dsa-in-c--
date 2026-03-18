//Check elements in linked list
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
int checkifpresent(node*head,int x){
    node*temp=head;
    while(temp){
        if(temp->data==x){
            return 1;
        }
    }
    return 0;
}
int main(){
    vector<int>arr={2,4,5,7,3,6,8,9};
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    node*head=convertarr2ll(arr);
    cout<<checkifpresent(head,x);
}