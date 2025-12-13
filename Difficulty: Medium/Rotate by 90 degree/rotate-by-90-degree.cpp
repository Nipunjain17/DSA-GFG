class Solution {
  public:
    // Anti-Clockwise Direction
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        
        // 1.Reverse the rows 
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        // 2.Transpose the matrixrix 
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};
