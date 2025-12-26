class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n = arr.size();
        
        unordered_map<int,int> index;
        for(int i=0; i<n; i++) index[arr[i]]++;
        
        for(int i=0; i<n; i++){
            if(index[arr[i]] > 1) return i+1;
        }
        return -1;
    }
};