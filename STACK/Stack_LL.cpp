#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node<T>* next;

    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Stack{
    Node<T> * head;
    int len;

    public:
    Stack(){
        head = NULL;
        len = 0;
    }
    int size(){
        return len;
    }
    bool isEmpty(){
        return len == 0;
    }
    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        len++;
    }
    T pop(){
        if(isEmpty())
            return -1;
        T ans = head->data;
        // deallocate the node and -1 the size orf the stack
        // make an temporary pointer to store address
        Node<T> * temp = head;
        head = head->next;
        delete temp;
        len--;
        return ans;
    }
    T top(){
        if(isEmpty())
            return -1;
        return head->data;
    }
};

int main() {
    Stack<int> st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.size() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}

/*int main(){
    Stack<int> s;
    s.push(20);
    s.push(40);
    s.push(26);
    s.push(46);

    cout << s.top() << endl;
	cout << s.pop() << endl;

	cout << s.top() << endl;
	cout << s.pop() << endl;

    cout << s.top() << endl;
	cout << s.pop() << endl;

    cout << s.top() << endl;
	cout << s.pop() << endl;
    
    cout << s.top() << endl;
	cout << s.pop() << endl;

    s.push(50);

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}*/