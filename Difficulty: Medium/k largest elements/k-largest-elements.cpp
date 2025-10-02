class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        vector<int> ans;
        for(int i=n-k; i<n; i++){
            ans.push_back(arr[i]);
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
    }
};