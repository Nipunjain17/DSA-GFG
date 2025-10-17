class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n = arr.size();
        int left = 0, right = n - 1;
        int ans = 0;
        
        while(left < right) {
            int sum = arr[left] + arr[right];
            
            if(sum < target) {
                left++;
            }
            else if(sum > target) {
                right--;
            }
            else { // sum == target
                int val1 = arr[left], val2 = arr[right];
                int count1 = 0, count2 = 0;
                
                // Count duplicates from left
                while(left <= right && arr[left] == val1) {
                    count1++;
                    left++;
                }
                
                // Count duplicates from right
                while(left <= right && arr[right] == val2) {
                    count2++;
                    right--;
                }
                
                // If both values are same, all elements are equal
                if(val1 == val2) {
                    // nC2 = n * (n-1) / 2
                    ans += count1 * (count1 - 1) / 2;
                }
                else {
                    // Each element from left can pair with each from right
                    ans += count1 * count2;
                }
            }
        }
        
        return ans;
    }
};