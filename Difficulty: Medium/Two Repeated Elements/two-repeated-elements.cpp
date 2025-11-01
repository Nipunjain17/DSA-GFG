class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        int n = arr.size() - 2;  // since array has n+2 elements
        vector<int> freq(n + 1, 0);  // +1 because numbers are 1 to n
        
        vector<int> result;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
            if (freq[arr[i]] == 2) { // found a repeated number
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};
