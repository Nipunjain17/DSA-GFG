class Solution {
  public:
    queue<int> reverseFirstK(queue<int> &q, int k) {
        int n = q.size();
        if(k > n) return q;
        stack<int> st;
        
        // fetch first k element from queue to stack
        for(int i=0; i<k; i++){
            st.push(q.front());
            q.pop();
        }
        
        // then put these element back in the queue
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        // fetch (n-k) element from the queue
        int t = n-k;
        while(t--){
            int data = q.front();
            q.pop();
            q.push(data);   
        }
        return q;
    }
};