class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0; i<n; i++){
            int curr = arr[i];
            
            while(!st.empty() && curr>= arr[st.top()] ){
                st.pop();
            }
            if(st.empty()) ans[i] = i+1;
            else ans[i] = i - st.top();
             
            st.push(i);
        }
        return ans;
    }
};