

class Solution {
  public:
    string colName(long long int n) {
        string ans = "";
        
        while(n>0){
            n--;
            char ch = 'A' +(n % 26);
            ans = ch + ans;
            n = n/26;
        }
        
        return ans;
    }
};