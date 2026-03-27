class Solution {
  public:
    int firstIndex(const vector<int> &arr) {
        // Your code goes here
        int low = 0 , high = (int)arr.size()-1 ; 
        int ans = -1 ; 
        int mid = 0 ; 
        
        while(low <= high){
            // Finding the mid element.
            mid = low + ((high - low) >> 1) ; 
            
            // If 1 found than search in the left side because we
            // need to find first index of 1 and there can be more
            // 1 available in the left side.
            if(arr[mid] == 1){
                ans = mid ; 
                high = mid - 1 ; 
            }else{
            // it means all the elements in the range [0,mid]]
            // are 0 so we need to search in the right side.Because
            // our answer can be present in the right side.
                low = mid + 1 ; 
            }
        }
        
        return ans ; 
    }
};