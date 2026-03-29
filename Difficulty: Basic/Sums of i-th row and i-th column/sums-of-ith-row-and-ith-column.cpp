// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        int sq = min(N, M);
        int res_row[N] = { 0 };
        int res_col[M] = { 0 };
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                res_row[i] = res_row[i] + A[i][j];
                res_col[j] = res_col[j] + A[i][j];
            }
        }
        
        for(int i=0;i<sq;i++)
        {
            if(res_row[i]!=res_col[i])
            {
                return 0;;
            }
        }
        
        return 1;
    }
};