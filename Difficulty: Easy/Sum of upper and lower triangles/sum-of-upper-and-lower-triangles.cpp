class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        int n = mat.size();
        int Upper = 0, Lower = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j <= i){
                    Upper += mat[i][j];
                }
                if(j >= i){
                    Lower += mat[i][j];
                }
            }
        }
        
        return {Lower,Upper};
    }
};
