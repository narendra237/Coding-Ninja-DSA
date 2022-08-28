#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this -> data = data;
            next = NULL;
        }
};

int main(){

    //Statically creation of a linked list;
    Node n1(1);
    Node * head = &n1;  // initialisation of the head
    Node n2(2);
    n1.next = &n2; // n2 address will be given to n1.next
    cout<<n1.data<<" "<<n2.data<<endl<<"----------------------"<<endl;

    //Dynamically creaton of a linked list;
    Node *n3 = new Node(10); 
    Node *new_head = n3;    // initialisation of the head dynamically
    Node *n4 = new Node(20);
    n3 -> next = n4;  // n2 address will be given to n3->next
     cout<<n3->data<<" "<<n4->data<<endl;

}