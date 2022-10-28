template<typename T>
class BSTNode{
    public:
    T data;
    BSTNode<int> * left;
    BSTNode<int> * right;

    BSTNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BSTNode(){
        if(left)
            delete left;
        if(right)
            delete right;
    }
};