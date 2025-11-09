
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        int left = 0, right = arr.size() - 1;
        while(left <= right){
            if(arr[left] != arr[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
