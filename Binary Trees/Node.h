template<typename T>
class Node{
    public:
    T data;
    Node * left;
    Node *right;

    Node(T data){
        this->data = data;
        right = NULL;
        left = NULL;
    }

    ~Node(){
        delete left;
        delete right;
    }
};