class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        
        // Use long long to prevent overflow
        long long actualSum = 0;
        long long actualSqSum = 0;
        
        // Calculate actual sum and sum of squares
        for (int i = 0; i < n; i++) {
            actualSum += arr[i];
            actualSqSum += (long long)arr[i] * arr[i];
        }
        
        // Expected sum and sum of squares for 1 to n
        long long expectedSum = (long long)n * (n + 1) / 2;
        long long expectedSqSum = (long long)n * (n + 1) * (2 * n + 1) / 6;
        
        // Let missing number be x and repeating number be y
        // Then: actualSum - expectedSum = y - x ... (1)
        // And: actualSqSum - expectedSqSum = y² - x² = (y-x)(y+x) ... (2)
        
        long long diff1 = actualSum - expectedSum;      // y - x
        long long diff2 = actualSqSum - expectedSqSum;  // y² - x²
        
        // From equation (2): y² - x² = (y-x)(y+x)
        // So: y + x = (y² - x²) / (y - x) = diff2 / diff1
        long long sum = diff2 / diff1;  // y + x
        
        // Now we have:
        // y - x = diff1
        // y + x = sum
        // Solving: y = (diff1 + sum) / 2, x = (sum - diff1) / 2
        
        int repeating = (diff1 + sum) / 2;
        int missing = (sum - diff1) / 2;
        
        return {repeating, missing};
    }
};