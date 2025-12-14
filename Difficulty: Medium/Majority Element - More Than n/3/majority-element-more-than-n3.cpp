class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int,int> freq;
        
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        
        vector<int> ans;
        
        for(auto &it : freq){
            if(it.second > n/3){
                ans.push_back(it.first);
                
            }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};

/* 

arr  →  [2, 2, 3, 1, 3, 2, 1, 1]
map  →  {1:3, 2:3, 3:2}
ans  →  [1, 2]

*/