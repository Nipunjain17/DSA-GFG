

class Solution {
  public:
    int SaveGotham(vector<int>& arr) {
        int n = arr.size();
        
        long long ans = 0;
        long long modulo = 1e9+7;
        stack<int> st;
        
        for(int i=n-1 ; i>=0; i--){
            int curr = arr[i];
            
            while(!st.empty() && curr >= st.top()){
                st.pop();
            }
            
            if(!st.empty()) ans = (ans + st.top()) % modulo;
            
            st.push(curr);
        }
        return ans;
        
    }
};