class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int leftSum = arr[0], rightSum = 0;
        for(int i=2;i<arr.size();i++){
            rightSum+=arr[i];
        }
        for(int i=1;i<arr.size();i++){
            if(leftSum == rightSum)
                return i;
            leftSum+=arr[i];
            rightSum-=arr[i+1];
        }
        return -1;
    }
};