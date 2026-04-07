//add two numbers in linked list
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int data1,node*next1=nullptr){
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
node*addtwonumbers(node*l1,node*l2){
    node*dummyhead=new node(-1);
    node*current=dummyhead;
    node*temp1=l1;
    node*temp2=l2;
    int carry=0;
    while(temp1!=nullptr||temp2!=nullptr){
        int sum=carry;
        if(temp1)sum+=temp1->data;
        if(temp2)sum+=temp2->data;
        node*newnode=new node(sum%10);
        carry=sum/10;
        current->next=newnode;
        current=current->next;
        if(temp1)temp1=temp1->next;
        if(temp2)temp2=temp2->next;
    }
    if(carry){
        node*newnode=new node(carry);
        current->next=newnode;
    }
    return dummyhead->next;
}
int main(){
    int n1;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    vector<int>arr1(n1);
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the size of second array: ";
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    node*l1=convertarr2ll(arr1);
    node*l2=convertarr2ll(arr2);
    node*result=addtwonumbers(l1,l2);
    cout<<"New linked list: ";
    print(result);
}