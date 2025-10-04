class Solution {
public:
    int minDist(vector<int>& arr, int x, int y) {
        int n = arr.size();
        int lastPos = -1;
        int minDist = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (arr[i] == x || arr[i] == y) {
                // If previous element was different (x vs y)
                if (lastPos != -1 && arr[i] != arr[lastPos]) {
                    minDist = min(minDist, i - lastPos);
                }
                // Update last seen position
                lastPos = i;
            }
        }

        // If minDist never updated, one or both elements are missing
        if (minDist == INT_MAX)
            return -1;
        return minDist;
    }
};
