class Solution {

  public:
    int findK(vector<vector<int>> &a, int n, int m, int k) {
        
        int startingRow = 0 , startingCol = 0; 
        int endingRow = n - 1, endingCol = m - 1;
        
        int count = 0, total = n * m;
        vector<int> ans;
        while(count < total){
            
            // Print Starting Row
            for(int index=startingCol; count < total && index<=endingCol; index++){
                ans.push_back(a[startingRow][index]);
                count++;
            }
            startingRow++;
            
            // Printing Ending Column
            for(int index=startingRow; count < total && index<=endingRow; index++){
                ans.push_back(a[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // Printing Ending Row
            for(int index=endingCol; count < total && index>=startingCol; index--){
                ans.push_back(a[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //Print Starting Column
            for(int index=endingRow; count < total && index>=startingRow; index--){
                ans.push_back(a[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans[k-1];
    }
};