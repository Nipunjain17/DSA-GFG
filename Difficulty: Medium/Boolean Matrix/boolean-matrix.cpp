class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        bool row = false, col = false;
        
        for(int j=0; j<m; j++){
            if(mat[0][j] == 1) row = true;
        }
        
        for(int i=0; i<n; i++){
            if(mat[i][0] == 1) col = true;
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 1){
                    mat[i][0] = 1;
                    mat[0][j] = 1;
                }
            }
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(mat[i][0] == 1 || mat[0][j] == 1) mat[i][j] = 1;
            }
        }
        
        // for first row
        if(row){
            for(int j=0; j<m; j++) mat[0][j] = 1;
        }
        
        // for first col
        if(col){
            for(int i=0; i<n; i++) mat[i][0] = 1;
        }
    }
};
