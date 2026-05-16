//Intersection of Two Linked Lists
// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3 Output: Intersected at '8'
//Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1 Output: Intersected at '2'
//better force solution
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
int getlengthdifference(Node*head1,Node*head2){
    Node*t1=head1;
    int N1=0;
    Node*t2=head2;
    int N2=0;
    while(t1!=nullptr){
        N1++;
        t1=t1->next;
    }
    while(t2!=nullptr){
        N2++;
        t2=t2->next;
    }
    return N1-N2;
}
Node*intersectionpoint(Node*head1,Node*head2){
    int diff=getlengthdifference(head1,head2);
    if(diff<0){
        while(diff++ !=0){
            head2=head2->next;
        }
    }else{
        while(diff--!=0){
            head1=head1->next;
        }
    }
    while(head1!=nullptr&&head2!=nullptr){
        if(head1==head2)return head1;
        head2=head2->next;
        head1=head1->next;
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
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr1(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of second array length: ";
    cin>>m;
    vector<int>arr2(m);
    cout<<"Enter the elements of array: ";
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