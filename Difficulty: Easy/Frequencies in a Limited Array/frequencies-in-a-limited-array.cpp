class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        int maxi = *max_element(arr.begin(),arr.end());
        vector<int> ans(n,0);
        
        for(int i=0; i<n; i++){
            ans[arr[i]-1]++;
        }
        
        return ans;
    }
};
