class Solution {
  private:
    vector<int> nextSmallerElement(vector<int> arr, int n) {
        
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()] >= curr){
                st.pop();
            }
            // ans is at top of stack
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int>prevSmallerElement(vector<int> arr, int n){
        
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()] >= curr){
                st.pop();
            }
            // ans is at top of stack
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
  public:
    int getMaxArea(
        vector<int> &arr) {
        int n = arr.size();
        
        vector<int> next(n);
        next = nextSmallerElement(arr,n);
        
        vector<int> prev(n);
        prev = prevSmallerElement(arr,n);
        
        int area = INT_MIN;
        
        for(int i=0; i<n; i++){
            int len = arr[i];
            
            if(next[i] == -1) next[i] = n;
            
            int width = next[i] - prev[i] -1;
            
            int newArea = len * width;
            area = max(newArea,area);
        }
        return area;
    }
};
