#include<stack>
class SpecialStack {
  public:
    stack<int> st;
    stack<int> mini;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
        st.push(x);
        if(mini.empty() || x <= mini.top()){
            mini.push(x);
        }
        
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()) return;
        
        if(st.top() == mini.top()) mini.pop();
        
        st.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty()) return -1;
        
        return st.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        if(st.empty()) return true;
        else return false;
    }

    int getMin() {
        // Finds minimum element of Stack
        if(mini.empty()) return -1;
        
        return mini.top();
    }
};