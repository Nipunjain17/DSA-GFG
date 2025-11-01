
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        int n = arr.size();
        map<int,int> freq;
        
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(freq[arr[i]] == 1){
                return arr[i];
            }
        }
        return 0;
    }
};
