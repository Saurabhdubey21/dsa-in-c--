//Iterative inorder transversal
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
vector<int>iterativeinorder(Node*root){
    vector<int>res;
    if(root==nullptr)return res;
    stack<Node*>st;
    Node*node=root;
    while(true){
        if(node!=nullptr){
            st.push(node);
            node=node->left;
        }else{
            if(st.empty()==true)break;
            node=st.top();
            st.pop();
            res.push_back(node->data);
            node=node->right;
        }
    }
    return res;
}
Node*inputtree(){
    int x;
    cin>>x;
    if(x==-1)return nullptr;
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
    vector<int>ans=iterativeinorder(root);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}