class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int n = arr.size();
        
        int left = 0 , right = n-1;
        
        int leftMax = arr[left] , rightMax = arr[right];
        
        int water = 0;
        while(left < right){
            
            if(arr[left] < arr[right]){
                left++;
                leftMax = max(arr[left],leftMax);
                water += (leftMax - arr[left]);
            }
            else{
                right--;
                rightMax = max(arr[right],rightMax);
                water += (rightMax - arr[right]);
            }
        }
        return water;
    }
};