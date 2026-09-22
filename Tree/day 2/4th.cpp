//Iterative Postorder
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int data1){
        data=data1;
        left=right=nullptr;
    }
};
vector<int>iterativepostorder(Node*root){
    vector<int>postorder;
    stack<Node*>st1;
    stack<Node*>st2;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=nullptr){
            st1.push(root->left);
        }
        if(root->right!=nullptr){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}
Node*inputtree(){
    int x;
    cin>>x;
    if(x==-1){
        return nullptr;
    }
    Node*root=new Node(x);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*node=q.front();
        q.pop();
        cin>>x;
        if(x!=-1){
            node->left=new Node(x);
            q.push(node->left);
        }
        cin>>x;
        if(x!=-1){
            node->right=new Node(x);
            q.push(node->right);
        }
    }
    return root;
}
int main(){
    Node*root=inputtree();
    vector<int>ans=iterativepostorder(root);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}