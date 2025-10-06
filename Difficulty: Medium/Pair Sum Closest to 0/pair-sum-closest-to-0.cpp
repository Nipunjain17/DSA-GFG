class Solution {
  public:
    int closestToZero(int arr[], int n) {
        sort(arr, arr + n);

        int left = 0, right = n - 1;
        
        int minDiff = INT_MAX;
        int closestSum = INT_MAX;
        
        while (left < right) {
            int sum = arr[left] + arr[right];
            int diff = abs(sum);
            
            // update logic with tie-breaking
            if (diff < minDiff || (diff == minDiff && sum > closestSum)) {
                minDiff = diff;
                closestSum = sum;
            }

            if (sum == 0){
                return 0;
            }    
            else if (sum < 0){
                left++;
            }
            else{
                right--;
            }    
        }
        return closestSum;
    }
};