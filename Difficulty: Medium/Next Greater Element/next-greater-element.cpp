class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        
        stack<int> st;
        st.push(arr[n-1]);
        vector<int> ans(n,-1);
        
        for(int i=n-2; i>=0; i--){
            int curr = arr[i];
            
            while(!st.empty() && (curr >= st.top())){
                st.pop();
            }
            
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            
            st.push(curr);
        }
        return ans;
    }
};