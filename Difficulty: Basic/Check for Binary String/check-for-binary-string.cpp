// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(s[i] != '0' && s[i] != '1'){
                return false;
            }
        }
        return true;
    }
};