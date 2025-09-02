

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size()-1;
        vector<int> result;
        int RightMax = arr[n];
        result.push_back(arr[n]);
        for(int i=n-1;i>=0;i--){
            if(arr[i] >= RightMax){
                RightMax = arr[i];
                result.push_back(RightMax);
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};