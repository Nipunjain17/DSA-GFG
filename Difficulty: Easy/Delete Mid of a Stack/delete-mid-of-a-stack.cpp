class Solution {
  public:
    void solve(stack<int>& st, int count, int size){
        // Base Case 
        if(size/2 == count){
            st.pop();
            return;
        }
        
        int num = st.top();
        st.pop();
        
        // Recurrsive Call
        solve(st,count+1,size);
        
        st.push(num);   
    }
    void deleteMid(stack<int>& s) {
        int n = s.size();
        int count = 0;
        
        solve(s,count,n);
    }
};