#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node<T> * next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Queue{
    Node<T> * head;
    Node<T> * tail;
    int len ;

    public:
        Queue(){
            head = NULL;
            len = 0;
            tail = NULL;
        }
        int size(){
            return len;
        }
        bool empty(){
            return len == 0;
        }

        void enqueue(T element){
            //Node<T> *front = NULL;
            Node<T> *newNode = new Node<T>(element);
            if(head == NULL ){
                head = newNode;
                //front = head;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
           
            len++;
        }

        T dequeue(){
            if(empty())
                return 0;
            T ans = head->data;
            Node<T> * temp = head;
            head = head->next;
            delete temp;
            len--;
            return ans;
        }

        T front(){
            if(empty())
                return 0;
            return head->data;
        }
};

int main() {
    Queue <int> q;

    
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                q.enqueue(input);
                break;
            case 2:
                cout << q.dequeue() << "\n";
                break;
            case 3:
                cout << q.front() << "\n";
                break;
            case 4:
                cout << q.size() << "\n";
                break;
            default:
                cout << ((q.empty()) ? "true\n" : "false\n");
                break;
        }
}

