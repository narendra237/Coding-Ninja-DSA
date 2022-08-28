template<typename T>
class queue{
    T *data;
    int firstIndex;
    int size;
    int capacity;
    int lastIndex;
    public:
        queue(int s){
            data = new T[s];
            firstIndex = -1;
            lastIndex = 0;
            capacity = s;
            size = 0;
        }
    int getSize(){
        return size;
    }
    
    int isEmpty(){
        return size==0;
    }
    void enqueue(T element){
        if(size == capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1)%capacity;
        if(firstIndex == -1)    // this is optional it is done automatically
            firstIndex ==0;     // doesn't required
        size++;
    }
    T front(){
        if(isEmpty()){
            cout<<"Queue is Empty  !"<<endl;
            return 0;
        }
        return data[firstIndex];
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty  !"<<endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1)%capacity;
        if(size == 0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }

};
