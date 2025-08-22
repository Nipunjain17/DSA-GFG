class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += arr[j];
                if(sum == target) {
                    return {i+1, j+1};  // 1-based indices
                }
            }
        }
        return {-1};
    }
};
