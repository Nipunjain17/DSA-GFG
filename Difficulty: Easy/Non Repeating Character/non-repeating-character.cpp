
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n = s.length();
        
        int arr[26] = {0};
        int number = 0;
        
        for(int i=0; i<n; i++){
            char ch = s[i];
            
            number = ch - 'a';
            arr[number]++;
        }
        
        for(int i=0; i<n; i++){
            if(arr[s[i] - 'a'] == 1){
                return s[i];
            }
        }
        return '$';
    }
};