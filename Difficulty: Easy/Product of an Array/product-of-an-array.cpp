class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        int n = arr.size();
        long long int i = 0, prod = 1;
        
        while(i < n){
            prod = (prod * arr[i])%1000000007;
            i++;
        }
        return prod%1000000007;
    }
};