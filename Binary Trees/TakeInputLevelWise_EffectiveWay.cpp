#include<bits/stdc++.h>
#include "node.h"
using namespace std;

void printTree(Node<int> * root){
    if(root == NULL)
        return;
    cout<<root->data<<":" ;
    if(root->left !=NULL)
        cout<<"L"<<root->left->data<<" ";
    if(root->right != NULL)
        cout<<"R"<<root->right->data;
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

Node<int> * takeInputLevelWise(){
    int rootData;
    cout<<"Enter root Data"<<endl;
    cin>>rootData;
    if(rootData == -1)
        return NULL;
    Node<int> * root = new Node<int>(rootData);

    queue<Node<int>* >  pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        Node<int> * front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter left Child of "<<front-> data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            Node <int> * child = new Node<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout<<"Enter right Child of "<< front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
            Node<int> * child = new Node<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

int main(){
    Node<int> * root = takeInputLevelWise();
    printTree(root);
    delete root;
}