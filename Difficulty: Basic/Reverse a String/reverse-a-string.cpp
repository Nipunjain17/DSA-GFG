// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        string rev="";
        for(int i=s.size()-1;i>=0;i--){
        rev.push_back(s[i]);
        }
        return rev;
    }
};
