class Solution {
  public:
    void reverseStack(stack<int> &st) {
        vector<int> arr;
        
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        
        int n = arr.size();
        for(int i=0; i<n; i++){
            st.push(arr[i]);
        }
    }
};