class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        if(n <= 1){
            return 0;
        }
        
        int currWater;
        int maxWater = INT_MIN;
        
        int left = 0, right = n-1;
        while(left < right){
            int height = min(arr[left],arr[right]);
            int width = right - left;
            
            currWater = width * height;
            maxWater = max(currWater,maxWater);
            if(arr[left] < arr[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};