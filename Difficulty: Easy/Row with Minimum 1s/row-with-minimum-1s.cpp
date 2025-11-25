class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> freq(row,0);
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(mat[i][j] == 1){
                    freq[i]++;
                }
            }
        }
        
        int minIndex = 0;
        for(int i=1; i<row; i++){
            if(freq[i] < freq[minIndex]){
                minIndex = i;
            }
        }
        
        return (minIndex + 1);
    }
};