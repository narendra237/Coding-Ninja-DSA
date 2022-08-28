#include<bits/stdc++.h>
using namespace std;

class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size(){
        return nextIndex;
    }
    int isEmpty(){
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex == capacity){
            cout<<"Stack is Full."<<endl;
            return;
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
    StackUsingArray s(4);
    s.push(20);
    s.push(40);
    s.push(26);
    s.push(46);

    cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}