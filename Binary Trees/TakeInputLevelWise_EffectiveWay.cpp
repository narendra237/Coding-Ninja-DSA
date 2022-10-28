#include<bits/stdc++.h>
#include "node.h"
using namespace std;


pair<int,int> Heightdiameter(Node<int> * root){
    if(root == NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int,int> leftAns = Heightdiameter(root->left);
    pair<int,int> rightAns = Heightdiameter(root->right);
    int ld = leftAns.second;
    int lh = leftAns.first;
    int rd = rightAns.second;
    int rh = rightAns.first;

    int height = 1+max(lh,rh);
    int diameter = max(lh+rh,max(ld,rd));
    pair<int,int> p;
    p.first = height;
    p.second = diameter;
    return p;
}


// time complexity of below  functions is O(N)
int height(Node<int> * root){
    if(root == NULL)
        return 0;
    return 1 + max(height(root->left),height(root->right));
}
// time complexity of below  functions is O(N*h)  where, h= height of tree must be 'h' or 'logn'
int diameter(Node<int> * root){
    if (root == NULL)
        return 0;
    int option1 = height(root->left)+height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1,max(option2,option3));
}



// Tree traversal i.e., 
// 1. level oreder
// 2. pre order  --->  root-left-right
// 3. post order --->  left-right-root
// 4. Inorder    --->  left-root-right

void Preoreder(Node<int> * root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    Preoreder(root->left);
    Preoreder(root->right);
}

void Inorder(Node<int> * root){
    if(root == NULL)
        return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(Node<int> *root){
    if(root == NULL)
        return ;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";


}


int countNodes(Node <int> * root){
    if(root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}


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
            front->left = child;1
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

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1

int main(){
    Node<int> * root = takeInputLevelWise();
    printTreeLevelWise(root);
    cout<<countNodes(root)<<endl;
    cout<<" Inorder of our BT is :";
    Inorder(root);
    cout<<endl; 
    cout<<" Perorder of our BT is :";
    Preoreder(root);
    cout<<endl;
    cout<<" Postorder of our BT is :";
    Postorder(root);
    cout<<endl;
    cout<<"Diameter of our tree is: "<<diameter(root)<<endl;

    pair<int,int> p = Heightdiameter(root);
    cout<<"Height: "<<p.first<<" "<<"Diameter: "<<p.second<<endl;
    
    
    
    
    
    delete root;
}