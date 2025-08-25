class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        // Boyer-Moore Voting Algorithm
        int candidate = 0;
        int count = 0;
        
        // Phase 1: Find potential candidate
        for(int i = 0; i < n; i++) {
            if(count == 0) {
                candidate = arr[i];
                count = 1;
            }
            else if(arr[i] == candidate) {
                count++;
            }
            else {
                count--;
            }
        }
        
        // Phase 2: Verify if candidate is actually majority
        int freq = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == candidate) {
                freq++;
            }
        }
        
        // Return candidate only if it appears more than n/2 times
        if(freq > n/2) {
            return candidate;
        }
        
        return -1; // No majority element found
    }
};