class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();
        
        vector<int> ans;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                ans.push_back(b[j]);
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        
        // Add remaining element in resultant array
        while(i < n){
            ans.push_back(a[i]);
            i++;
        }
        
        while(j < m){
            ans.push_back(b[j]);
            j++;
        }
        
        int total = ans.size();
        
        if(total%2 == 1){
            return ans[total/2];
        }
        
        else{
            double mid1 = ans[total/2];
            double mid2 = ans[total/2-1];
            return (mid1 + mid2)/2.0;
        }    
    }
};