//Intersection of Two Linked Lists
// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3 Output: Intersected at '8'
//Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1 Output: Intersected at '2'
//brute force solution
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
Node*intersectionpoint(Node*head1,Node*head2){
    map<Node*,int>mpp;
    Node*temp=head1;
    while(temp!=nullptr){
        mpp[temp]=1;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return nullptr;
}
void print(Node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int n;
    cout<<"Enter the size of first array: ";
    cin>>n;
    vector<int>arr1(n);
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of 2nd array: ";
    cin>>m;
    vector<int>arr2(m);
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    Node*head1=convertarr2ll(arr1);
    cout<<"first linked list: ";
    print(head1);
    Node*head2=convertarr2ll(arr2);
    cout<<"Second linkedlist: ";
    print(head2);
    Node*ans=intersectionpoint(head1,head2);
    if(ans!=nullptr){
        cout<<"Intersection at node with value: "<<ans->data<<endl;
    }else{
        cout<<"No intersection point\n";
    }
}