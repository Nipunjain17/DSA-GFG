class Solution {
  public:
    vector<int> downwardDiagonal(int n, vector<vector<int>> arr) {
        vector<int> ans;
        
        // Part 1: Diagonals starting from FIRST ROW (top edge)
        for(int startCol = 0; startCol < n; startCol++){
            int i = 0, j = startCol;
            
            while(i < n && j >= 0){
                ans.push_back(arr[i][j]);
                i++;
                j--;
            }
        } // gives - 1 2 4 3 5 7 
        
        // Part 2: Diagonals starting from FIRST COLUMN (left edge, skip (0,0))
        for(int startRow = 1; startRow < n; startRow++){
            int i = startRow, j = n - 1;
            
            while(i < n && j >= 0){
                ans.push_back(arr[i][j]);
                i++;
                j--;
            }
        } // Gives - 6 8 9 
        
        return ans;
    }
};