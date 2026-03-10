class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        stack<int> st;
        st.push(arr[0]);
        for(int i=1; i<n; i++){
            int curr = arr[i];
            while(!st.empty() && curr >= st.top()){
                st.pop();
            }
            if(!st.empty()) ans[i] = st.top();
            
            st.push(curr);
        }
        
        return ans;
    }
};