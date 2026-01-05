class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int windowSum = 0;
        for(int i=0; i<k; i++){
            windowSum += arr[i];
        }
        int maxSum = windowSum;
        
        for(int i=k; i<n; i++){
            windowSum += arr[i] - arr[i-k];
            maxSum = max(windowSum,maxSum);
        }
        return maxSum;
    }
};