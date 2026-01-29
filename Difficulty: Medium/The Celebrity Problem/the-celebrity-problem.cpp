class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        
        stack<int> st;
        
        // Step-1, Push all elements in the stack
        for(int i=0; i<n; i++){
            st.push(i);
        }
        
        // Step-2, Get two elements and compare them
        while(st.size() > 1){
            int A = st.top();
            st.pop();
            
            int B = st.top();
            st.pop();
            
            if(mat[A][B] == 1){
                st.push(B);
            }
            else{
                st.push(A);
            }
        }
        
        // Step-3, Single element in the stack
        int candidate = st.top();
        
        // Step-4, Verify it through Row Check and Column Check
        for(int i=0; i<n; i++){
            // row check
            if(i != candidate && mat[candidate][i] == 1){
                return -1;
            }
            // col check
            if(i != candidate && mat[i][candidate] == 0){
                return -1;
            }
        }
        
        return candidate;
    }
};