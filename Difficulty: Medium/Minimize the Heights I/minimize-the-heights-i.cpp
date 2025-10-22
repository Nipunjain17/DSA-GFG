// User function Template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        if(n == 0){
            return 0;
        }
        
        int result = arr[n-1] - arr[0];
        
        for(int i=1; i<n; i++){
            int minHeight = min(arr[0]+k, arr[i]-k);
            int maxHeight = max(arr[n-1]-k , arr[i-1]+k);
            
            result = min(result, maxHeight - minHeight);
        }
        return result;
    }
};