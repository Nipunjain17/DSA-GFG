class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        for(int i = 0 ; i< n ; i++){
            st.push(arr[i]);
        }
        while(!st.empty()){
            for(int i = 0 ; i<n ; i++){
                arr[i] = st.top();
                st.pop();
            }
        }
    }
};