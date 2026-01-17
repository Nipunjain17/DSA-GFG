class twoStacks {
  public:
    int * arr;
    int top1;
    int top2;
    int size;
    twoStacks() {
        this->size = 100;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // atleast a empty one space is available
        if(top2 - top1 > 1){
            arr[++top1] = x;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        // atleast a empty one space is available
        if(top2 - top1 > 1){
            arr[--top2] = x;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1--];
            return ans;
        }
        else{
            return -1;
        }
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        if(top2 <= size-1){
            int ans = arr[top2++];
            return ans;
        }
        else{
            return -1;
        }
    }
};