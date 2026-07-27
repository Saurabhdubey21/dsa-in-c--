//104. Maximum Depth of Binary Tree
//Input: root = [3,9,20,null,null,15,7] Output: 3

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*root;
    Node*left;
    Node*right;
    Node(int data1){
        data=data1;
        left=right=nullptr;
    }
};
int maxdepth(Node*root){
    if(root==nullptr)return 0;
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);
    return 1+max(lh,rh);
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(6);
    root->right->left->left=new Node(5);
    int depth=maxdepth(root);
    cout<<"Max depth: "<<depth<<endl;
}