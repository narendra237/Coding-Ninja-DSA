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

Node *reverseList(Node * head){
    Node * prev = NULL;
    Node * next = NULL;
    while(head!=NULL){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}


bool IsPalindrome(Node* head){
    if(head==NULL || head->next==NULL) 
        return true;
    Node *slow =head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
        slow  = slow ->next;
        fast = fast->next->next;
    }
    slow->next = reverseList(slow->next);
    slow = slow->next;
    while(slow!=NULL){
        if(head->data != slow->data )
           return false;
        slow = slow->next;
        head = head->next;
    }
    return true;
}


Node *takeInput(){
    int data;
    cin>>data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL ){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

int main(){
    Node *head = takeInput();
    bool ans = IsPalindrome(head);
    if(ans)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
