class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startingRow = 0;
        
        vector<int>arr;
        
        int total = row * col;
        int count = 0;
        
        while(count < total){
            for(int index=0; count<total && index<col; index++){
                arr.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            for(int index=col-1; count<total && index>=0; index--){
                arr.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
        }
        
        return arr;
    }
};