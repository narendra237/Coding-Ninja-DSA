#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>*root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter num of chidren of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i = 0;i<numChild; i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>*child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

/*
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
*/


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

void PrintAtLevelK(TreeNode<int>* root, int k){
    if(root == NULL)
        return;
    if(k==0)
        cout<<root->data<<"\t";
    for(int i = 0;i<root->children.size();i++)
        PrintAtLevelK(root->children[i], k-1);
}


int getLeafNodeCount(TreeNode<int>* root) {
     if(root == NULL)
        return 0;
    if(root->children.size() == 0)
        return 1;
    int count=0;
    for(int i = 0;i<root->children.size();i++){
        count=count + getLeafNodeCount(root->children[i]);
    }
   // count++;
    return count;
}

int TotalNodes(TreeNode <int> * root){
    if(root == NULL)
        return;
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
    TreeNode<int> * root = takeInputLevelWise();
    printTree(root);
    cout<<"Total Nodes in trees: "<<TotalNodes(root);

    // TODO delete a tree
}