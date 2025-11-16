class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int n = arr.size();
        
        deque<int> dq;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            
            // Remove out of window k size indicies 
            if(!dq.empty() && dq.front() == i - k){
                dq.pop_front();
            }
            
            // removes smaller element from the window 
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            
            // pushes the index of maximum element in the window 
            dq.push_back(i);
            
            // this will store the output of window 
            if(i >= k-1){
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};