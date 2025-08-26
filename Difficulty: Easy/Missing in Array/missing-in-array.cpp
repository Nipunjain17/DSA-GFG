class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        long long total_sum = 1LL * (n + 2) * (n + 1) / 2;  // sum from 0 to n
        long long actual_sum = accumulate(arr.begin(), arr.end(), 0LL);
        return (int)(total_sum - actual_sum);
    }
};