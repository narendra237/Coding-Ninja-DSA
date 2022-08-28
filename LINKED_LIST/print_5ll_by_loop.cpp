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

void print(Node * head){
    Node *temp = head;
    while(temp != 0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
     Node n1(10);
    Node * head = &n1; 
    
    Node n2(11);
    n1.next = &n2;
    
    Node n3(12);
    n2.next  = &n3;
    
    Node n4(13);
    n3.next = &n4;
    
    Node n5(41);
    n4.next = &n5;

    print(head);
}