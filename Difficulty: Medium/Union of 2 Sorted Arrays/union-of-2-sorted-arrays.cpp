class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size() , m = b.size();
        int i = 0 , j = 0;
        vector<int> result;
        
        while(i < n && j < m){
            if(a[i] < b[j]){
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                i++;
            }
            else if(b[j] < a[i]){
                if(result.empty() || result.back() != b[j]){
                    result.push_back(b[j]);
                }
                j++;
            }
            else{ // a[i] == b[j]
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        // Add remaining 
        while(i < n){
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++;
        }
        
         while(j < m){
            if(result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
            }
            j++;
        }
        
        return result;
    }
};