class Solution {
  public:
    int lastIndex(string s) {
        int n = s.length();
        int index = -1;
        
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                index = i;
            }
        }
        return index;
    }
};