//Pre, Post, Inorder in one traversal
//Input : root = [1, 3, 4, 5, 2, 7, 6 ]Output : [ [5, 3, 2, 1, 7, 4, 6] , [1, 3, 5, 2, 4, 7, 6] , [5, 2, 3, 7, 6, 4, 1] ]
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
vector<vector<int>>prepostinorder(Node*root){
    stack<pair<Node*,int>>ans;
    ans.push({root,1});
    vector<int>pre,in,post;
    if(root==nullptr)return;
    while(!ans.empty()){
        Node* node=st.top().first;
        int state=st.top().second;
        st.pop();
        if(state==1){
            pre.push_back(node->data);
            state++;
            
        }
    }
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
}