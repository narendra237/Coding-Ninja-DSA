#include<bits/stdc++.h>
#include "node.h"
using namespace std;

Node<int>* buildTreeHelper(int* in, int* pre, int inS, int inE, int preS, int preE) {
	if (inS > inE) {
		return NULL;
	}

	int rootData = pre[preS];
	int rootIndex = -1;
	for (int i = inS; i <= inE; i++) {
		if (in[i] == rootData) {
			rootIndex = i;
			break;
		}
	}

	int lInS = inS; //left inorder start
	int lInE = rootIndex - 1;//left inorder end
	int lPreS = preS + 1;//left preorder start
	int lPreE = lInE - lInS + lPreS;//left preorder end
	int rPreS = lPreE + 1;//right preorder start
	int rPreE = preE;//right preorder end
	int rInS = rootIndex + 1;//right inorder start
	int rInE = inE;//right inorder end
	Node<int>*  root = new Node<int>(rootData);
	root->left = buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
	root->right = buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);
	return root;
}

Node<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
  
    return buildTreeHelper(inorder,preorder,0,inLength-1,0,preLength-1);
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

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1

int main(){
    int In[] = {4,2,5,1,8,6,9,3,7};
    int Pre[] = {1,2,4,5,3,6,8,9,7};
    Node<int> * root ;
    printTreeLevelWise(root);
    
   
    
    delete root;
    

}