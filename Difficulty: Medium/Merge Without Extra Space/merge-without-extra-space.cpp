class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();
        
        int total = n + m;
        int j = 0;
        while(j < m){
            a.push_back(b[j]);
            j++;
        }
        
        sort(a.begin(),a.end());
        
        b.clear();
        
        for(int i=n; i<total; i++){
            b.push_back(a[i]);
        }
        
        a.erase(a.begin()+n, a.begin()+total);
    }
};