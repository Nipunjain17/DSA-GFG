class Solution{
  private:
    bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& maze){
        // is it safe to move or not 
        if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && maze[x][y] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>>& maze, int n, vector<string>& ans, int x, 
    int y, vector<vector<int>>& visited, string path){
        
        // base case 
        if(x == n-1 && y == n-1){ // you reached x,y here 
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // 4 Choices - D, L, R, U
        
        // For Down 
        int newX = x+1, newY = y;
        if(isSafe(newX, newY, n, visited, maze)){
            path.push_back('D');
            solve(maze, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        // for Left
        newX = x, newY = y-1;
        if(isSafe(newX, newY, n, visited, maze)){
            path.push_back('L');
            solve(maze, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        // for Rigth
        newX = x, newY = y+1;
        if(isSafe(newX, newY, n, visited, maze)){
            path.push_back('R');
            solve(maze, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        // for Up
        newX = x-1, newY = y;
        if(isSafe(newX, newY, n, visited, maze)){
            path.push_back('U');
            solve(maze, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        
        vector<string> ans;
        
        if(maze[0][0] == 0) return ans;
        
        int srcx = 0, srcy = 0;
        
        vector<vector<int>> visited = maze;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        
        solve(maze, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};