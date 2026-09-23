//Iterative Postorder
//Using one stack
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
    if(root==nullptr){
        return postorder;
    }
    stack<Node*>st;
    Node*curr=root;
    while(curr!=nullptr||!st.empty()){
        if(curr!=nullptr){
            st.push(curr);
            curr=curr->left;
        }else{
            Node*temp=st.top()->right;
            if(temp==nullptr){
                temp=st.top();
                st.pop();
                postorder.push_back(temp->data);
                while(!st.empty()&&temp==st.top()->right){
                    temp=st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            }else{
                curr=temp;
            }
        }
    }
    return postorder;
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
    vector<int>ans=iterativepostorder(root);
    cout<<"Postorder transversal: "<<endl;
    for(int x:ans){
        cout<<x<<" "<<endl;
    }
}