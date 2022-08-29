/*
I guess there is an error in my enque() that's why it doesn't take 
many input and switch case end automTtically . I will improve it 
further to to correct my mistakes throughout the code
*/

#include <bits/stdc++.h>
using namespace std;

template<typename T>

class Queue{
    T* data;
    int size;
    int FirstIndex;
    int nextIndex;
    int capacity;
    public:
    Queue(){
        data = new T[0];
        size = 0;
        FirstIndex = -1;
        nextIndex = 0;
        capacity  = 0;
    }
    
    int getSize(){
        return size;
    }
    
    bool empty(){
        return size==0;
    }
    
    void enqueue(T element){
        if(size == capacity){
            T *data_array = new T[2*capacity];
            for(int i = 0;i<capacity;i++)
                data_array[i] = data[i];
            capacity *= 2;
            delete [] data;
            data = data_array;
        }

        data[nextIndex] = element;
        nextIndex = (nextIndex+1)%capacity;
        // if(FirstIndex == -1)
        //     FirstIndex = 0;
        size++;
    }
    
    T dequeue(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        T ans = data[FirstIndex];
        FirstIndex = (FirstIndex+1)%capacity;
        size--;
        if(size == 0){
            FirstIndex = -1;
            nextIndex = 0;
        }
        return ans;
        
    }
    T front(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[FirstIndex];
    }
};


int main() {
	Queue<int> q;
	int choice, input;
	cout<<"Enter your choice: ";
	cin>>choice;
	switch( choice){
	    case 1: cout<<"Enter the Data in Queue : ";
	            cin>>input;
	            q.enqueue(input);
	            break;
	    case 2: cout<<"Size of the Queue DATA STRUCTURES : " << q.getSize()<<endl;
	            break;
	    case 3: cout<<"Delete an element from the Queue : "<<q.dequeue()<<endl;
	            break;
        case 4: cout<<"Front element of the Queue is : "<<q.front()<<endl;
                break;
        case 5: cout<<"Check that our Queue is empty or not : "<<(q.empty()?"True / EMPTY\n":"False\n")<<endl;
                break;

        default: cout<<"Exit"<<endl;
	}
	
}