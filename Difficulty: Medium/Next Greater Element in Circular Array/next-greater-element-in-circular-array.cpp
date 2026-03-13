class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n,-1);
        
        for(int i=2*n -1; i>=0; i--){
            int index = i % n;
            int curr = arr[index];
            
            while(!st.empty() && curr >= arr[st.top()]){
                st.pop();
            }
            
            if(!st.empty()) ans[index] = arr[st.top()];
            st.push(index);
        }
        
        return ans;
    }
};