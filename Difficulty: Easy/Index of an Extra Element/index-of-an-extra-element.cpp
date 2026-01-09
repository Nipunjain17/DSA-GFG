class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        
        int i=0, j = 0;
        while(i<n && j<m){
            if(a[i] == b[j]){ // both elements are equal
                i++;
                j++;
            }
            else if(a[i] != b[j]){
                if(a[i+1] == b[j]) return i;
                if(a[i] == b[j+1])return j;
            }
        }
        return n-1;
    }
};