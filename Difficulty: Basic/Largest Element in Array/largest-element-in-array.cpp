class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(arr[i],maxi);
        }
        return maxi;
    }
};
