//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        int n = arr.size();
        int leftSum = 0, rightSum = 0;
        
        for(int i=0; i<n/2; i++){
            leftSum += arr[i];
        }
        
        for(int i=n/2; i<n; i++){
            rightSum += arr[i];
        }
        
        int mul = leftSum * rightSum;
        return mul;
    }
};