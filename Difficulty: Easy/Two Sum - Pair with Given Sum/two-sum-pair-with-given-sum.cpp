class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int l = 0;
        int r = n-1;
        while(l<r){
          if(arr[l] + arr[r] < target){
               l++;
          }
          else if(arr[l] + arr[r] > target){
               r--;
          }
          else{
              return true;
          }
       }
       return false;
    }
};