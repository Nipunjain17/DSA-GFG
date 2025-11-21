// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                if(mat[row][col] == x){
                    return  true;
                }
            }
        }
        return false;
    }
};