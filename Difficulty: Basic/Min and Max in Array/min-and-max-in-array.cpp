// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = max(arr[i],maxi);
            mini = min(arr[i],mini);
        }
        return {mini,maxi};
    }
};