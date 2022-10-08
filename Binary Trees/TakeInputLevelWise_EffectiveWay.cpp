#include<bits/stdc++.h>
#include "node.h"
using namespace std;

int countNodes(Node <int> * root){
    if(root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1

void printTreeLevelWise(Node<int> *root) {
    if(!root)
        return;
    queue<Node<int> *> pn;
    pn.push(root);
    while(pn.size() != 0){
        Node<int> * front = pn.front();
        pn.pop();
        cout<<front->data<<":";
        
        if(front->left)
        {   
            pn.push(front->left);
            cout<<"L:"<<front->left->data;
        }
         else
             cout<<"L:-1";
        
        cout<<",";
        
        if(front->right)
       {    
            pn.push(front->right);
            cout<<"R:"<<front->right->data<<endl;
        }
        else
             cout<<"R:-1"<<endl;
    }
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
    printTreeLevelWise(root);
    cout<<countNodes(root)<<endl;
    delete root;
}