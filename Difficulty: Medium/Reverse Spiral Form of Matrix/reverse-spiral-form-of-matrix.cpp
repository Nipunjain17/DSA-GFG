// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int row, int col, vector<vector<int>>& mat) {
        int startingRow = 0 , startingCol = 0; 
        int endingRow = row - 1, endingCol = col - 1;
        
        int count = 0, total = row * col;
        vector<int> arr;
        while(count < total){
            
            // Print Starting Row
            for(int index=startingCol; count < total && index<=endingCol; index++){
                arr.push_back(mat[startingRow][index]);
                count++;
            }
            startingRow++;
            
            // Printing Ending Column
            for(int index=startingRow; count < total && index<=endingRow; index++){
                arr.push_back(mat[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // Printing Ending Row
            for(int index=endingCol; count < total && index>=startingCol; index--){
                arr.push_back(mat[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //Print Starting Column
            for(int index=endingRow; count < total && index>=startingRow; index--){
                arr.push_back(mat[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        int left = 0, right = arr.size() - 1;
        while(left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
        return arr;
    }
};