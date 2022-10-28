/*
Time Complexity : O(N)
Space Complexity : O(H)

where N is the number of nodes in the input tree
and H is the height of the input tree
*/

#include<climits>
bool solve(BSTNode<int> * root, int mn, int mx){
    if(root == NULL)
        return 1;
    if(root->data > mx  || root->data < mn)
        return 0;
        return (solve(root->left,mn,root->data-1) && solve(root->right,root->data,mx));        
}

bool isBST(BSTNode<int> * root){
    return solve(root, INT_MIN,INT_MAX);
}