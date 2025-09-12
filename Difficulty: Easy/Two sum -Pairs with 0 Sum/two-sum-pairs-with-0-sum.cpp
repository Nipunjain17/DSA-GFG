// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;
        int left = 0 , right = n-1;
        while(left < right){
            if(arr[left]+arr[right] == 0){
                result.push_back({arr[left],arr[right]});
                int lval = arr[left] , rval = arr[right];
                while(left < right && arr[left] == lval) left++;
                while(left < right && arr[right] == rval) right--;
            }
            else if(arr[left]+arr[right] < 0){
                left++;
            }
            else{
                right--;
            }
        }
        return result;
    }
};