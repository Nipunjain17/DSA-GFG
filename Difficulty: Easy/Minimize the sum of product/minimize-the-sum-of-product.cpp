class Solution {
  public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        long long int ans = 0;
        

        for(int i=0;i<n;i++){
            ans += (arr1[i] * arr2[n-i-1]);
        }
        return ans;
    }
};