// User function Template for C++

class Solution {
  public:
    int maximumPath(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m));
        int maxi = INT_MIN;
        
        for(int j=0; j<m; j++){
            dp[0][j] = mat[0][j];
            maxi = max(maxi,dp[0][j]);
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                int Upper = 0, UpperLeft = 0, UpperRight = 0;
                
                // for upper element 
                if(i >= 1){
                    Upper = dp[i-1][j];
                }
                // for upper left element
                if(i >= 1 && j >= 1){
                    UpperLeft = dp[i-1][j-1];
                }
                // for upper right element 
                if(i >= 1 && j < m-1){
                    UpperRight = dp[i-1][j+1];
                }
                
                dp[i][j] = mat[i][j] + max(Upper, max(UpperLeft, UpperRight));
                
                maxi = max(maxi,dp[i][j]);
            }
        }
        
        return maxi;
    }
};