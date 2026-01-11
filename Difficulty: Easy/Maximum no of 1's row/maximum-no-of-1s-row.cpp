class Solution {
  public:
    int maxOnes(vector<vector<int>> &Mat, int N, int M) {
        int maxCount = INT_MIN, index = 0;
        for(int i=0; i<N; i++){
            int count = 0;
            for(int j=0; j<M; j++){
                if(Mat[i][j] == 1){
                    count++;
                }
            }
            if(count > maxCount){
                maxCount = count;
                index = i;
            }
            
        }
        return index;
    }
};