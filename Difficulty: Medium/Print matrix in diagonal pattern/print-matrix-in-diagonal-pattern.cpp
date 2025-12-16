/*You are required to complete this method */

class Solution {
  public:
    vector<int> matrixDiagonally(vector<vector<int>>& mat) {
        int n = mat.size();
        
        vector<int> arr;
        int total = n*n;
        
        int dir = 1; // Top-Rigth dirn is 1 and Down-Left is -1
        
        int i = 0, j = 0;
        while(arr.size() < total){
            arr.push_back(mat[i][j]);
            
            if(dir == 1){ // T
                if(j == n-1){
                    dir = -1;
                    i++;
                }
                else if(i == 0){
                    dir = -1;
                    j++;
                }
                else{
                    i--;
                    j++;
                }
            }
            
            else{ // Down-left Direction
                if(i == n-1){
                    dir = 1;
                    j++;
                }
                else if(j == 0){
                    dir = 1; 
                    i++;
                }
                else{
                    i++;
                    j--;
                }
            }
        }
        return arr;
    }
};