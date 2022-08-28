#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node * takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next  = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}


Node* InsertNode(Node *head, int i, int data){
    Node*newNode = new Node(data);
        int count = 0;
        Node * temp = head;
        if(i==0){
            newNode->next = head;
            head = newNode;
            return head;
        }
        while(temp != NULL && count < i-1){
            temp = temp->next;
            count++;
        }
        if(temp != NULL){
            Node *a = temp -> next;     // newNode->next = temp->next;
            temp -> next = newNode;     // temp->next = newNode;
            newNode->next = a;
        }
        return head;
}


void print(Node*head){
    Node * temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int length(Node *head)
{
    //Write your code here
    int count = 0;
    Node * temp = head;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    Node*head = takeInput();
    print(head);
    cout<<"Length of the linked list :"<<length(head)<<endl;

    int i, data;
    cin>>i>>data;
    head = InsertNode(head,i ,data);
    print(head);
    cout<<"Length of the linked list :"<<length(head)<<endl;
    return 0;
}
