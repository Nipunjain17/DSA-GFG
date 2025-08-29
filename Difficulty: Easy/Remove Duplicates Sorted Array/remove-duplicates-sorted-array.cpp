class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i] != arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};