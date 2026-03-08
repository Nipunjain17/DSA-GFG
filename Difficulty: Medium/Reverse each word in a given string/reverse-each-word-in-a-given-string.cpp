class Solution {
  public:
    string reverseWords(string &s) {
        string ans;
        int n = s.length();
        int left = 0;
        
        while(left < n && s[left] == ' ') left++;
        
        int right = n-1;
        while(right >= 0 && s[right] == ' ') right--;
        
        while(left <= right){
            if(s[left] != ' '){
                ans += s[left];
            }
            else if(!ans.empty() && ans.back() != ' '){
                ans += ' ';
            }
            left++;
        }
        
        int i = 0, j = 0;
        int len = ans.size();
        while(i <= len){
            if(i == len || ans[i] == ' '){
                reverse(ans.begin()+j, ans.begin()+i);
                j = i+1;
            }
            i++;
        }
        return ans;
    }
};