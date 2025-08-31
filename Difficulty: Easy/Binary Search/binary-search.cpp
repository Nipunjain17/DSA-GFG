class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        int result = -1;
        
        while(left <= right){
            int mid = left + (right - left)/2;
            
            if(arr[mid] == k){
                result = mid;
                right = mid-1;//keep searching left
            }
            else if(k > arr[mid]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return result;
    }
};