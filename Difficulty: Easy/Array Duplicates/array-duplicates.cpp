class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();

        // freq[i] will store how many times value i occurs in arr
        vector<int> freq(n + 1, 0);

        // answer vector to store duplicates
        vector<int> ans;

        // 1) Count frequencies
        for (int i = 0; i < n; i++) {
            // arr[i] is guaranteed between 1 and n by the constraint
            freq[arr[i]]++;
        }

        // 2) Collect numbers that occurred more than once
        for (int value = 1; value <= n; value++) {
            if (freq[value] > 1) {
                ans.push_back(value);
            }
        }

        return ans;
    }
};
