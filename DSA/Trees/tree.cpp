#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        //cout<<"Tree created"<<endl;
        data=val;
        left=NULL;
        right=NULL;
    }
};
void bfs(struct Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()){
        int size=q.size();
        for(int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
            cout<<node->data<<" ";
        }
    }
}
void postorder(struct Node* node){
    if(node==NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}
void inorder(struct Node* node){
    if(node==NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void preorder(struct Node* node){
    if(node==NULL){
        return ;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    bfs(root);
    return 0;
}