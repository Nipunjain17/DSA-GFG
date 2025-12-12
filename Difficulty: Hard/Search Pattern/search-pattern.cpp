class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        int n = txt.size();
        int m = pat.size();
        
        vector<int> ans;
        for(int i=0; i<n; i++){
            // make 
            string compare = txt.substr(i,m);
            
            if(compare == pat) ans.push_back(i);
        }
        return ans;
    }
};