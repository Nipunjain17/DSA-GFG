class Solution {
  public:
    string reverseEqn(string s) {
        int n = s.size();
        
        string ans = "";
        
        int i = n-1;
        while(i >= 0){
            string temp = "";
            
            if(isdigit(s[i])){
                while (i >= 0 && isdigit(s[i])){
                    temp += s[i];
                    i--;
                }
                reverse(temp.begin(),temp.end());
            }
            else{
                temp += s[i];
                i--;
            }
            ans += temp;
        }
        return ans;
    }
};