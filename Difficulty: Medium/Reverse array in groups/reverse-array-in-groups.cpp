class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();
        
        for(int i=0; i<n; i+=k){
            int end = min(i+k,n); // handles last group easly
            reverse(arr.begin()+i,arr.begin()+end);
        }
    }
};
