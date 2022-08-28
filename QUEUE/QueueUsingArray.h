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

};