class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int row = mat.size();
        int col = mat[0].size();
        
        int left = 0, right = row * col - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            int element = mat[mid/col][mid%col];
            
            if(element == x){
                return true;
            }
            else if(element < x){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return false;
    }
};

// Time Complexity = O(log(row * col)) 