#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
        }
};

void print(Node *head){
    Node * temp = head;
    while(temp != NULL){
         cout<<temp->data<<" ";
        temp = temp->next;
    }
}




int main(){
    Node *n1 = new Node(10);
    Node * head = n1;

    Node *n2 = new Node(23);
    n1-> next = n2;

    print(head);
}


