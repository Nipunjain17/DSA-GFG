class Solution {
  public:
    bool isSafe(int x, int y, vector<vector<int>>& grid,
                vector<vector<int>>& visited, int n, int m) {
        return (x >= 0 && x < n &&
                y >= 0 && y < m &&
                visited[x][y] == 0 &&
                grid[x][y] != 0);
    }

    bool dfs(int x, int y, vector<vector<int>>& grid,
             vector<vector<int>>& visited, int n, int m) {

        if (grid[x][y] == 2) return true;

        visited[x][y] = 1;

        // Right
        if (isSafe(x, y + 1, grid, visited, n, m))
            if (dfs(x, y + 1, grid, visited, n, m)) return true;

        // Down
        if (isSafe(x + 1, y, grid, visited, n, m))
            if (dfs(x + 1, y, grid, visited, n, m)) return true;

        // Left
        if (isSafe(x, y - 1, grid, visited, n, m))
            if (dfs(x, y - 1, grid, visited, n, m)) return true;

        // Up
        if (isSafe(x - 1, y, grid, visited, n, m))
            if (dfs(x - 1, y, grid, visited, n, m)) return true;

        return false;
    }

    bool is_Possible(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    return dfs(i, j, grid, visited, n, m);
                }
            }
        }
        return false;
    }
};
