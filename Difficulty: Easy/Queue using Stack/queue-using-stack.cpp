class myQueue {

  public:
    stack<int> st1;
    stack<int> st2;
    myQueue() {
        // Initialize your data members
    }

    void enqueue(int x) {
        // Implement enqueue operation
        st1.push(x);
    }

    void dequeue() {
        // Implement dequeue operation
        
        if(st1.empty() && st2.empty()) return;
        
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        st2.pop();
        
    }

    int front() {
        // Implement front operation
        if(st1.empty() && st2.empty()) return-1;
        
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }

    int size() {
        // Implement size operation
        int n = st1.size() + st2.size();
        return n;
    }
};
