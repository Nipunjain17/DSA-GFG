class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        vector<int> ans;
        
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            ans.push_back(arr[i]);
        }
        
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<n;i++){
            if(arr[i] != ans[i]){
                return false;
            }
        }
        return true;
    }
};