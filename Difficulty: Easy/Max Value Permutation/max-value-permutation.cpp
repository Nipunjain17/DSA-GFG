class Solution {
  public:
    int maxValue(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        const int mod = 1e9 + 7;
        
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum = (sum + 1LL * arr[i] * i)%mod;
        }
        return int(sum);
    }
};