class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int n = arr.size();
        long long maxSum = -1;          // best sum found so far
        long long currSum = 0;          // current running sum of non-negative segment
        int start = 0;                  // start index of current segment
        int bestStart = -1, bestEnd = -1;

        for (int i = 0; i < n; ++i) {
            if (arr[i] >= 0) {
                // extend current non-negative segment
                currSum += arr[i];

                if (bestStart == -1) {
                    // first valid segment seen
                    maxSum = currSum;
                    bestStart = start;
                    bestEnd = i;
                } else {
                    if (currSum > maxSum) {
                        // strictly better sum
                        maxSum = currSum;
                        bestStart = start;
                        bestEnd = i;
                    } else if (currSum == maxSum) {
                        // tie: choose longer segment, then earlier start
                        int currLen = i - start + 1;
                        int bestLen = bestEnd - bestStart + 1;
                        if (currLen > bestLen || (currLen == bestLen && start < bestStart)) {
                            bestStart = start;
                            bestEnd = i;
                        }
                    }
                }
            } else {
                // negative -> reset current segment
                currSum = 0;
                start = i + 1;
            }
        }

        vector<int> result;
        if (bestStart == -1) {
            // no non-negative number found
            result.push_back(-1);
        } else {
            for (int i = bestStart; i <= bestEnd; ++i)
                result.push_back(arr[i]);
        }
        return result;
    }
};
