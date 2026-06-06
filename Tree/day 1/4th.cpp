//Reprentation of DFS
//Postorder serach
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*root;
    struct Node*left;
    struct Node*right;
    Node(int data1){
        data=data1;
        left=right=nullptr;
    }
};
void postorder(Node*root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
    root->left->right->left=new Node(8);
    root->right=new Node(3);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->left=new Node(9);
    root->right->right->right=new Node(10);
    postorder(root);
}