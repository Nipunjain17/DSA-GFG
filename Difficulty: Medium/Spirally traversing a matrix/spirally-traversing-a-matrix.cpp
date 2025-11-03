class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        int startingRow = 0 , startingCol = 0; 
        int endingRow = row - 1, endingCol = col - 1;
        
        int count = 0, total = row * col;
        vector<int> ans;
        while(count < total){
            
            // Print Starting Row
            for(int index=startingCol; count < total && index<=endingCol; index++){
                ans.push_back(mat[startingRow][index]);
                count++;
            }
            startingRow++;
            
            // Printing Ending Column
            for(int index=startingRow; count < total && index<=endingRow; index++){
                ans.push_back(mat[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // Printing Ending Row
            for(int index=endingCol; count < total && index>=startingCol; index--){
                ans.push_back(mat[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //Print Starting Column
            for(int index=endingRow; count < total && index>=startingRow; index--){
                ans.push_back(mat[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};