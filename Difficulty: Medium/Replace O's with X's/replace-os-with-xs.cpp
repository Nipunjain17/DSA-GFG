class Solution {
    int n, m;
    void dfs(int x, int y, vector<vector<char>>& grid){
        if(x<0 || x>=n || y<0 || y>=m || grid[x][y] != 'O') return;
        
        grid[x][y] = '#';
        
        dfs(x+1,y,grid); // Down
        dfs(x-1,y,grid); // Up
        dfs(x,y+1,grid); // Right
        dfs(x,y-1,grid); // Left
    }
  public:
    void fill(vector<vector<char>>& grid) {
        if(grid.empty()) return;
        
        n = grid.size();
        m = grid[0].size();
        
        // Covering the first and last column of grid
        for(int i=0; i<n; i++){
            if(grid[i][0] == 'O') dfs(i,0,grid);
            if(grid[i][m-1] == 'O') dfs(i,m-1,grid);
        }
        
        // Cover the first and last row of grid
        for(int j=0; j<m; j++){
            if(grid[0][j] == 'O') dfs(0,j,grid);
            if(grid[n-1][j] == 'O') dfs(n-1,j,grid);
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 'O') grid[i][j] = 'X';
                else if(grid[i][j] == '#') grid[i][j] = 'O';
            }
        }
    }
};