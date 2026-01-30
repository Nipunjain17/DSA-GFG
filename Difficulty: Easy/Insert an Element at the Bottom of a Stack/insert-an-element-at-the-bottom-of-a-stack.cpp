// User function Template for C++

class Solution {
  public:
    void insert(stack<int> &st, int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        
        int data = st.top();
        st.pop();
        
        // Recurive Call
        insert(st,x);
        
        st.push(data);
    }
    stack<int> insertAtBottom(stack<int> st, int x) {
       insert(st,x);
       return st;
    }
};