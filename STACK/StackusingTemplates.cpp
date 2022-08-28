#include<bits/stdc++.h>
using namespace std;

template<typename T>

class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(){
        data = new int[0];
        nextIndex = 0;
        capacity = 0;
    }

    int size(){
        return nextIndex;
    }
    int isEmpty(){
        return nextIndex==0;
    }
    void push( T element){
        if(nextIndex == capacity){
            T *newData = new int[2*capacity];
            for(int i = 0;i<=capacity;i++)
                newData[i] = data[i];
            capacity *= 2;
            delete []data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T pop(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return data[nextIndex];
    }
};

int main(){
    StackUsingArray<int> s;
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

}