#include<bits/stdc++.h>
#include "BST.h"
using namespace std;

bool BSTree(BSTNode<int> *root , int k) {

    if(root == NULL)
        return false;
    if(root->data == k)
        return true;
    else if(root->data>k)
        BSTree(root->left,k);
    else
        BSTree(root->right, k);
}

BSTNode<int> * takeInput(){
    int rootData;
    cin>>rootData;
    if(rootData != -1)
        return NULL;
    BSTNode<int> * root = new BSTNode<int>(rootData);
    queue<BSTNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BSTNode<int> * frontData = q.front();
        q.pop();
        int leftChild;
        if(leftChild!= -1){
            BSTNode<int> * leftNode = new BSTNode<int>(leftChild);
            frontData->left = leftNode;
            q.push(leftNode);
        }
        int rightChild;
        if(rightChild!= -1){
            BSTNode<int> * rightNode = new BSTNode<int>(rightChild);
            frontData->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;

}

int main(){
    BSTNode<int> * root = takeInput();
    int k;
    cin>>k;
    bool a = BSTree(root,k);
    if(BSTree(root,k))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
