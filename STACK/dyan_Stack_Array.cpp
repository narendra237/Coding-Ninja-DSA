#include<bits/stdc++.h>
using namespace std;

class StackUsingArray{
    int *data;
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
    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i = 0;i<=capacity;i++)
                newData[i] = data[i];
            capacity *= 2;
            delete []data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex];
    }
};

int main(){
    StackUsingArray s;
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