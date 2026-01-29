class Solution {
  private:
    vector<int> nextSmallerElement(vector<int> heights, int n){
        stack<int> st;
        st.push(-1);

        vector<int>ans(n);
        for(int i=n-1; i>=0; i--){
            int curr = heights[i];

            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(vector<int> heights, int n){
        stack<int> st;
        st.push(-1);

        vector<int>ans(n);
        for(int i=0; i<n; i++){
            int curr = heights[i];

            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int> heights, int n) {

        vector<int>next(n);
        next = nextSmallerElement(heights,n);

        vector<int>prev(n);
        prev = prevSmallerElement(heights,n);

        int area = INT_MIN;
        for(int i=0; i<n; i++){
            int height = heights[i];
            
            if(next[i] == -1) next[i] = n;
            int width = next[i] - prev[i] - 1;

            int currArea = height * width;
            area = max(currArea,area);
        }
        return area;
    }
  public:
    int maxArea(vector<vector<int>> &mat) {
        int n = mat.size(), m = mat[0].size();
        // Compute area for first row
        int area = largestRectangleArea(mat[0],m);
        
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(mat[i][j] != 0){
                    mat[i][j] = mat[i][j] + mat[i-1][j];
                }
                else{
                    mat[i][j] = 0;
                }
            }
            // entire row is updated
            area = max(area,largestRectangleArea(mat[i],m));
        }
        return area;
    }
};