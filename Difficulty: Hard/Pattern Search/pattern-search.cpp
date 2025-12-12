
class Solution {
  private:
    // Create a pie Table for pattern 
    vector<int> computeLPS(string P){
        int m = P.size();
        vector<int> lps(m,0);
        
        int len = 0;
        int i = 1;
        
        while(i < m){
            if(P[i] == P[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0) len = lps[len-1];
                else lps[i] = 0, i++;
            }
        }
        return lps;
    }
    
  public:
    // Function to check if the given pattern exists in the given string or not.
    bool search(string P, string S) {
        int n = S.size();
        int m = P.size();
        
        vector<int> lps = computeLPS(P);
        
        int i = 0, j = 0;
        while(i < n){
            if(S[i] == P[j]) i++,j++;
            
            if(j == m) return  true;
            
            else if(i < n && S[i] != P[j]){
                
                if(j != 0) j = lps[j-1];
                
                else i++;
            }
        }
        return false;
    }
};
