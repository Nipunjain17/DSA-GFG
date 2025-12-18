class Solution {
  public:
    string reverse(const string& S) {
        stack<char>s;
        for(int i=0;i<S.size();i++){
            s.push(S[i]);
        }
        string ans=" ";
        while(!s.empty()){
            char c=s.top();
            ans.push_back(c);
            s.pop();
        }
        return ans;
    }
};