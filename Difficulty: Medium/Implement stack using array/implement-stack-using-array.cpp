class myStack {
  public:
    int *arr;
    int size;
    int top;
    myStack(int n) {
        // Define Data Structures
        size = n;
        arr = new int[size];
        top = -1;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top == -1) return true;
        else return false;
    }

    bool isFull() {
        // check if the stack is full
        if(top == size-1) return true;
        else return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(top == size -1){
            //cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        // removes an element from the top of the stack
        if(top == -1){
            //cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int peek() {
        // Returns the top element of the stack
        if(top == -1) return -1;
        
        return arr[top];
    }
};