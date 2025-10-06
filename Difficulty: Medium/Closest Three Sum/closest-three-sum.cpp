// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
public:
    int threeSumClosest(vector<int> arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        int closestSum = 0;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                int diff = abs(target - sum);

                // ✅ key fix: handle tie case
                if (diff < minDiff || (diff == minDiff && sum > closestSum)) {
                    minDiff = diff;
                    closestSum = sum;
                }

                if (sum == target)
                    return sum; // perfect match
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }

        return closestSum;
    }
};