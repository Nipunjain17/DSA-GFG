class Solution {
  public:
    void insertAtBottom(stack<int> &st, int element){
        if(st.empty()){
            st.push(element);
            return;
        }
        
        int num = st.top();
        st.pop();
        insertAtBottom(st,element);
        
        st.push(num);
    }
    void reverseStack(stack<int> &st) {
        // base case 
        if(st.empty()) return;
        
        int num = st.top();
        st.pop();
        
        // Recurrsive Call
        reverseStack(st);
        insertAtBottom(st,num);
    }
};