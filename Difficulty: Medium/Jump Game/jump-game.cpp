// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr){
        int n = arr.size();
        int maxReach = 0;
        
        for(int i=0; i<n; i++){
            if(i > maxReach) return false;
            
            maxReach = max(maxReach, i+arr[i]);
            if(maxReach >= n-1) return true;
        }
        
        return true;
    }
};