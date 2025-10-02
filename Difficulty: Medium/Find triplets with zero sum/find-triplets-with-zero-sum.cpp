class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int target = 0;
        for(int i=n-1; i>=0; i--){
            int left = 0, right = i-1;
            while(left < right){
                int sum = arr[i]+arr[left]+arr[right];
                if(sum == target){
                    return true;
                }
                else if(sum > target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return false;
    }
};