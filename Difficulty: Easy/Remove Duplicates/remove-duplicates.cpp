class Solution {
  public:

    string removeDups(string &s) {
        vector<int>map(26,0);
        
        for(auto i : s) map[i-'a']++;
        
        string ans;
        
        for(auto i : s){
            if(map[i-'a']>0){
                ans.push_back(i);
                map[i-'a']=0;
            }
        }
        return ans;
    }
};