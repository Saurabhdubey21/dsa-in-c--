//Preorder transversal in tree using iterative method
//144. Binary Tree Preorder Traversal
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
vector<int>iterativepreorder(Node*root){
    vector<int>res;
    if(root==nullptr)return res;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node*node=st.top();
        st.pop();
        res.push_back(node->data);
        if(node->right!=nullptr)st.push(node->right);
        if(node->left!=nullptr)st.push(node->left);
    }
    return res;
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    vector<int>ans=iterativepreorder(root);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}