
class Solution {
  public:
    bool isSubSequence(string A, string B) {
        int n = B.length();
        int m = A.length();
        
        int i = 0, j = 0;
        while(i<n && j<m){
            if(B[i] == A[j])j++;
            i++;
        }
        if(j == m) return true;
        return false;
    }
};