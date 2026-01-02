class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int> arr;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<m; j++){
                sum+= mat[i][j];
            }
            arr.push_back(sum);
        }
        return arr;
    }
};
