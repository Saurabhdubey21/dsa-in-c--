//Flattening of LL
// Given a special linked list containing n head nodes where every node in the linked list contains two pointers:
// ‘Next’ points to the next node in the list ‘Child’ pointer to a linked list where the current node is the head
// Each of these child linked lists is in sorted order and connected by a 'child' pointer.
// Flatten this linked list such that all nodes appear in a single sorted layer connected by the 'child' pointer and 
// return the head of the modified list.
//brute force
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*child;
    Node(int data1){
        data=data1;
        next=nullptr;
        child=nullptr;
    }
};
Node*flattenLinkedList(Node*head){
    vector<int>ans;
    Node*temp=head;
    while(temp!=nullptr){
        Node*t=temp;
        while(t!=nullptr){
            ans.push_back(t->data);
            t=t->child;
        }
        temp=temp->next;
    }
    sort(ans.begin(),ans.end());
    Node*dummy=new Node(-1);
    Node*mover=dummy;
    for(int i=0;i<ans.size();i++){
        Node*newNode=new Node(ans[i]);
        mover->child=newNode;
        mover=newNode;
    }
    return dummy->child;
}
void printoriginal(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        Node*t=temp;
        while(t!=nullptr){
            cout<<t->data<<" ";
            t=t->child;
        }
        cout<<endl;
        temp=temp->next;
    }
}
void print(Node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->child;
    }
}
int main(){
    Node*head=new Node(5);
    head->next=new Node(10);
    head->next->next=new Node(19);
    head->next->next->next=new Node(28);
    // Child lists
    head->child=new Node(7);
    head->child->child=new Node(8);
    head->child->child->child=new Node(30);
    head->next->child=new Node(20);
    head->next->next->child=new Node(22);
    head->next->next->child->child=new Node(50);
    head->next->next->next->child=new Node(35);
    head->next->next->next->child->child=new Node(40);
    head->next->next->next->child->child->child=new Node(45);
    cout<<"Original Linked List:"<<endl;
    printoriginal(head);
    Node*ans=flattenLinkedList(head);
    cout<<"\nNew linked list";
    print(ans);
}