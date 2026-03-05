class Solution {
  public:
    string modify(string& s) {
        string ans;
        for(char ch: s){
            if(ch != ' ') ans.push_back(ch);
        }
      return ans;
    }
};