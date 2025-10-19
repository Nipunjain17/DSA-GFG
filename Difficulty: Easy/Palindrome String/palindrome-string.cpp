class Solution {
  public:
    bool isPalindrome(string& s) {
        int strt = 0, end = s.size()-1;
        
        while(strt <= end){
            if(s[strt++] != s[end--]){
                return false;
            }
        }
        return true;
    }
};