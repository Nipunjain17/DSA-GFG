class Solution {
public:
    int maxPathSum(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = 0;
        int sum1 = 0, sum2 = 0, result = 0;
        
        // Traverse both arrays
        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                sum1 += arr1[i++];
            } 
            else if (arr1[i] > arr2[j]) {
                sum2 += arr2[j++];
            } 
            else { // Common element found
                // Add maximum of both paths + common element
                result += max(sum1, sum2) + arr1[i];
                
                // Reset sums and move both pointers
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }
        
        // Add remaining elements from arr1
        while (i < n) {
            sum1 += arr1[i++];
        }
        
        // Add remaining elements from arr2
        while (j < m) {
            sum2 += arr2[j++];
        }
        
        // Add the maximum of remaining sums
        result += max(sum1, sum2);
        
        return result;
    }
};