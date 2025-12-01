// User function template for C++

class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int sum = 0;
        
        for(int i=0;i<=N-1;i++){
            for(int j=0;j<=M-1;j++){
                sum = sum + Grid[i][j];
            }
        }
        return sum;
    }
};