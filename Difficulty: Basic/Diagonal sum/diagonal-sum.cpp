// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int sum=0;
        for(int i=0; i<matrix.size(); i++){
            sum+=matrix[i][i];
            sum+=matrix[i][matrix.size()-i-1];
        }

        return sum;
    }
};