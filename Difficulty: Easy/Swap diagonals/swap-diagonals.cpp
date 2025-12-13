class Solution {
  public:
    void swapDiagonal(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int j = 0; int k = m-1;
        
        for(int i=0; i<n; i++){
            swap(mat[i][j],mat[i][k]);
            j++;
            k--;
        }
    }
};
