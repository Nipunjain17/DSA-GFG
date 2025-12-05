// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        int P_Sum =0,S_Sum=0,difference=0, A=0,B=N-1,Count =N;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(i==j)
                {
                    P_Sum += Grid[i][j];
                }
            }
        }
        
        while(Count>0)
        {
            S_Sum +=Grid[A][B];
            A++;
            B--;
            Count--;
        }
        
        difference =abs(P_Sum -S_Sum);
        return difference;
        
    }
};