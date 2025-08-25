class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int ms = INT_MIN;
        int cs = 0;
        for(int i=0;i<n;i++){
            cs = cs+arr[i];
            ms = max(cs,ms);
            if(cs<0){
                cs = 0;
            }
        }
        return ms;
    }
};