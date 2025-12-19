class Solution {
  private:
    void solve(string& s, int index, vector<string>& ans){
        // Base Case 
        if(index >= s.size()){
            ans.push_back(s);
            return;
        }
        
        for(int i=index; i<s.size(); i++){
            swap(s[index],s[i]);
            solve(s, index+1, ans);
            // BackTracking
            swap(s[index],s[i]);
        }
    }
  public:
    vector<string> permutation(string& S) {
        vector<string> ans;
        int index = 0;
        
        solve(S, index, ans);
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};