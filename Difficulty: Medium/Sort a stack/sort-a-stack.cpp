class Solution {
  public:
    void sortedInsert(stack<int> &st, int num){
        // Base Case
        if(st.empty() || (!st.empty() && num > st.top())){
            st.push(num);
            return;
        }
        
        int element = st.top();
        st.pop();
        
        // Recurrsive call
        sortedInsert(st,num);
        
        st.push(element);
    }
    
    void sortStack(stack<int> &st) {
        // Base Case
        if(st.empty()){
            return;
        }
        
        int num = st.top();
        st.pop();
        
        // recursive call
        sortStack(st);
        
        // for sorting the stack
        sortedInsert(st,num);
    }
};
