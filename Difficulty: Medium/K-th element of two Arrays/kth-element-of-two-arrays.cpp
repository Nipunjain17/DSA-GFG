class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int n = a.size();
        int m = b.size();
        
        vector<int> result;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                result.push_back(a[i]);
                result.push_back(b[j]);
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                result.push_back(a[i]);
                i++;
            }
            else{
                result.push_back(b[j]);
                j++;
            }
        }
        
        // Remaining Element
        while(i < n){
            result.push_back(a[i]);
            i++;
        }
        
        while(j < m){
            result.push_back(b[j]);
            j++;
        }
        
        return result[k-1];
    }
};