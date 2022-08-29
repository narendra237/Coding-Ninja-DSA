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
	Queue<int> q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.size() << endl;
	cout << q.empty() << endl;
}

