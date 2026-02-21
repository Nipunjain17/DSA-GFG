class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        
        int n = arr.size();
        
        stack<int> st;
        vector<int> ans(n,-1);
        
        st.push(arr[0]);
        
        for(int i=1; i<n; i++){
            int curr = arr[i];
            while(!st.empty() && st.top() >= curr){
                st.pop();
            }
            
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            
            st.push(curr);
        }
        return ans;
    }
};