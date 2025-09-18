class Solution {
public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end()); // sort array
        
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {  // keep only positive numbers
                ans.push_back(arr[i]);
            }
        }
        
        int m = ans.size();
        int target = 1;
        
        for (int i = 0; i < m; i++) {  // ✅ use m, not n
            if (ans[i] == target) {
                // Skip duplicates also
                while (i + 1 < m && ans[i + 1] == ans[i]) {
                    i++;
                }
                target++;
            } 
            else if (ans[i] > target) {
                return target;
            }
        }
        
        return target;
    }
};
