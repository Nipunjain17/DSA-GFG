class Solution {
public:
    int closest3Sum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        int closestSum = arr[0]+arr[1]+arr[2];

        for(int i = 0; i < n - 2; i++){
            
            int left = i + 1, right = n - 1;
            while(left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                
                int diff = abs(sum - target);
                if(diff < minDiff || (diff == minDiff && sum > closestSum)) {
                    minDiff = diff;
                    closestSum = sum;
                }
                
                if(sum == target) {
                    return sum;
                } 
                else if(sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return closestSum;
    }
};