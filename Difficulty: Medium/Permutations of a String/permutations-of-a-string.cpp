class Solution {
  private:
    void solve(string& s, int index, vector<string>&ans){
        // Base Case 
        if(index == s.size()){
            ans.push_back(s);
            return;
        }
        
        unordered_set<char> used; // to avoid duplicate
        
        for(int i=index; i<s.size(); i++){
            
            if(used.count(s[i])) continue;
            used.insert(s[i]);
            
            swap(s[i],s[index]);
            solve(s, index+1, ans);
            swap(s[i],s[index]);// BackTrack 
        }
    }
  public:
    vector<string> findPermutation(string &s) {
        int index = 0;
        vector<string> ans;
        solve(s, index, ans);
        return ans;
    }
};
