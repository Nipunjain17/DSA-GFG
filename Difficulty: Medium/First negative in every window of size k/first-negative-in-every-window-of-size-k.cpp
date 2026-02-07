class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        
        deque<int> dq;
        vector<int> ans;
        
        // To process the first k windows
        for(int i=0; i<k; i++){
            if(arr[i] < 0){
                dq.push_back(i);
            }
        }
        
        // Store the answer of first k window
        if(dq.size() > 0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        // Process remaining windows 
        for(int i=k; i<n; i++){
            
            // Removal 
            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }
            
            // addition 
            if(arr[i] < 0){
                dq.push_back(i);
            }
            
            // ans store
            if(dq.size() > 0){
                ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
        
        return ans;
    }
};