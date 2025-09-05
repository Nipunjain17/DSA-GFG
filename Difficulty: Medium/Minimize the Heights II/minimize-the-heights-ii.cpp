class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int result = arr[n-1] - arr[0]; // Intialize the result 
        
        for(int i=1;i<n;i++){
            if(arr[i]-k < 0){
                continue;
            }
            int minHeight = min(arr[0]+k,arr[i]-k);
            int maxHeight = max(arr[n-1]-k,arr[i-1]+k);
            
            result = min(result,maxHeight-minHeight);
        }
        return result;
    }
};