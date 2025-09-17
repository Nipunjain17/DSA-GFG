class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int n = a.size();
        int m = b.size();
        
        
        if(m > n){
            return false;
        }
        
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            
            if(a[i] == b[j]){
                i++;
                j++;
            }
            
            else{
                i++;
            }
        }
        if(j == m){
            return true;
        }
        else{
            return false;
        }
    }
};