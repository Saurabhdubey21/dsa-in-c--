//Represention of tree
//Level order of transversal
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
vector<vector<int>>levelorder(Node* root){
    vector<vector<int>>res;
    if(root==nullptr)return res;
    queue<Node*>q;
    q.push(root);
    while(q.empty()!=nullptr){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node*node=q.front();
            q.pop();
            level.push_back(node->data);
            if(node->left!=nullptr)q.push(node->left);
            if(node->right!=nullptr)q.push(node->right);
        }
        res.push_back(level);
    }
    return ans;
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    vector<vector<int>>res=levelorder(root);
    cout<<"Level order of Transversal of tree: "<<endl;
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}