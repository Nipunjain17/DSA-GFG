class Solution {
  public:
    int isValid(string &s) {
        int n = s.size();
        
        int sum = 0; // stores the digit of every dot
        int count = 0; // stores the count of dots
        
        // In case dot is in first place
        if(s[0] == '.') return 0;
        
        // check for two consecutive dots
        for(int i=1; i<n; i++){
            if(s[i] == '.' && s[i-1] == '.'){
                return 0;
            }
        }
        
        for(int i=0; i<n; i++){
            
            if(s[i] != '.'){
                if(i != n-1 && sum == 0 && s[i]-'0' == 0 && s[i+1] != '.'){
                    return false;
                }
                sum = sum * 10 + (s[i] - '0');
                
                if(!(sum >= 0 && sum <= 255)){
                    return 0;
                }
                
            }
            
            else{
                count++;
                if(!(sum >= 0 && sum <= 255)){
                    return 0;
                }
                
                sum = 0; // reset the sum after the dot comes
                
                if(count > 3){
                    return 0;
                }
            }
        }
        if(count < 3){
            return 0;
        }
        
        return 1;
    }
};