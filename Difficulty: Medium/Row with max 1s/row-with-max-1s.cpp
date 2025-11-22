class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> freq(row, 0); 
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(mat[i][j] == 1){
                    freq[i]++;
                }
            }
        }

        // find index of row with maximum 1s
        int maxIndex = 0;
        for(int i = 1; i < row; i++){
            if(freq[i] > freq[maxIndex]){
                maxIndex = i;
            }
        }

        // If all rows have 0 ones, return -1
        if(freq[maxIndex] == 0) return -1;

        return maxIndex;
    }
};
