class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        int count = 0;
        for(int i = 0; i < N; i++)
        {
            int maxi = INT_MIN;
            int flag = 1;
            for(int j = 0; j < M; j++)
            {
                if(Mat[i][j] > maxi)  maxi = Mat[i][j];
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)  count++;
            
            int mini = INT_MAX;
            if(flag == 0)
            {
                flag = 1;
                for(int j = 0; j < M; j++)
                {
                    if(Mat[i][j] < mini)  mini = Mat[i][j];
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1)  count++;
            }
        }
        return count;
    }
};