class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        int n = q.size()/2;
        int i = n;
        stack<int> st;
        // 1. Push the first half element in the stack
        while(i--){
            st.push(q.front());
            q.pop();
        }
        
        // 2. push the stack element back to the queue
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        // 3. first half of queue will bw pop and push
        i = n;
        while(i--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        
        // 4. First half of queue  back into stack
        i = n;
        while(i--){
            st.push(q.front());
            q.pop();
        }
        
        // 5. Push the element in the queue
        while(!st.empty()){
            
            // first element from stack
            int val = st.top();
            st.pop();
            q.push(val);
            
            // second from queue
            val = q.front();
            q.pop();
            q.push(val);
        }
    }
};