#include<iostream>
#include"Node.h"
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

Node<int> * takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    if(rootData == -1)
        return NULL;
    Node<int> * root = new Node<int>(rootData);
    Node<int> * leftChild = takeInput();
    Node<int> * rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

int main(){
    Node<int> * root = takeInput();
    printTree(root);
    delete root;



/*    Node<int> * root = new Node<int> (1);
    Node<int> * node1 = new Node<int> (2);
    Node<int> * node2 = new Node<int> (3);
    root->left = node1;
    root->right = node2;
    printTree(root);
    delete root;
*/

}