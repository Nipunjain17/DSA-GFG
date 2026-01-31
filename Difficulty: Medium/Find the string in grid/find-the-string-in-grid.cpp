class Solution {
  public:
    int n, m;
  private:
    bool matchWord(vector<vector<char>> grid, string word, int i, int j){
        if(grid[i][j] != word[0]) return 0;
        
        int dirX[] = {-1,1,0,0,-1,-1,1,1};
        int dirY[] = {0,0,-1,1,1,-1,1,-1};
        
        for(int dir=0; dir<8; dir++){
            int k = 0, x = i, y = j;
            while(k < word.size()){
                if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] != word[k]) break;
                x += dirX[dir];
                y += dirY[dir];
                k++;
            }
            if(k == word.size()) return 1;
        }
        return 0;
    }
  public:
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word) {
        n = grid.size();
        m = grid[0].size();
        
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(matchWord(grid,word,i,j)) ans.push_back({i,j});
            }
        }
        return ans;
    }
};