#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter no. of children of "<<rootData<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        TreeNode<int>* child =  takeInput();
        root->children.push_back(child);
    }
    return root;
}


void printTree(TreeNode<int>* root){
    if(root == NULL)
        return;
    cout<<root->data<<":";
    for(int i = 0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i = 0; i<root->children.size() ; i++){
        printTree(root->children[i]);
    }
}

int TotalNodes(TreeNode <int> * root){
    int ans = 1;
    for(int i = 0;i<root->children.size();i++)  
        ans += TotalNodes(root->children[i]);
    return ans;
}

int main(){
    /*
    TreeNode<int> * root = new TreeNode<int>(1);
    TreeNode<int> * node1 = new TreeNode<int>(2);
    TreeNode<int> * node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    TreeNode<int> * root = takeInput();
    printTree(root);
    cout<<"Total Nodes in trees: "<<TotalNodes(root);
    // TODO delete a tree
}