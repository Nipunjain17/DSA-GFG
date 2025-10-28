class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int n = s.length();
        
        int arr[26] = {0};
        int number = 0;
        
        // Store the count of the alphabet 
        // for eg a - 0 , b - 1, c - 2 etc.
        for(int i=0; i<n; i++){
            char ch = s[i];
            
            number = ch - 'a';
            arr[number]++;
        }
        
        // Check the maximum no. in array
        int maxi = -1, ans = 0;
        for(int i=0; i<26; i++){
            if(maxi < arr[i]){
                maxi = arr[i];
                ans = i; // Store that index number of max occur 
            }
        }
        
        char finalAns = 'a' + ans;
        return finalAns;
    }
};