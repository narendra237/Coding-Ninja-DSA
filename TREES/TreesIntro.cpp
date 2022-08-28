/*  LITTLE BIT CONFUSING TO UNDERSTAND TO GIVE INPUT IN TREES ,
    I TRIED BUT DIDN'T GET THAT EXPECTED TREE
    SO WE NEED A BETTER APPROACH TO INPUT DATA IN THE TREES 
    AND ALSO IT REQUIRES STRONG KNOWLEDGE OF RECURSION SO WE DROP IT 
    AND USE A BETTER APPROACH FOR THAT.
    CAN SEE RESULTS BELOW
*/


#include<bits/stdc++.h>
using namespace std;

template <typename T >
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data = data;
    }
};

TreeNode<int> * takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter num of children of"<<rootData<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    if(root == NULL)
        return;
    cout<<root->data<<":";
    for(int i= 0;i<root->children.size();i++)
        cout<<root->children[i]->data<<",";
    cout<<endl;
    for(int i = 0;i<root->children.size();i++)
        printTree(root->children[i]);
}

int main(){
    TreeNode<int> * root = takeInput();
    printTree(root);
}
/* CODE RESULT A/C TO MY UNDERSTANDING
Enter data
1
Enter num of children of1
3
Enter data
5
Enter num of children of5
0
Enter data
6
Enter num of children of6
0
Enter data
3
Enter num of children of3
0
1:5,6,3,
5:
6:
3: */

/* EXPECTED OUTPUT OF TREE WHICH I WANT */
/*
1:2,3,4,
3:
4:
*/