class Solution {
  public:
    vector<int> repeatedRows(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int> index;
        set<string> str;
        
        for(int i=0; i<n; i++){
            string row = "";
            
            for(int j=0; j<m; j++){
                row += (mat[i][j] + '0');
            }
            
            // agar rows kisi ki duplicate ho tou
            if(str.count(row)){
                index.push_back(i);
            }
            else{
                str.insert(row);
            }
        }
        return index;
    }
};
