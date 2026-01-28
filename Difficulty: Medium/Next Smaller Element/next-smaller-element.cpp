class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        
        stack<int> st;
        st.push(-1);
        vector<int> ans(n,-1);
        
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            while(st.top() >= curr){
                st.pop();
            }
            // ans is at top of stack
            ans[i] = st.top();
            st.push(curr);
        }
        return ans;
    }
};
