class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        
        sort(arr.begin(),arr.end()); // Sort the arrival time
        sort(dep.begin(),dep.end()); // Sort the Departure time
        
        int i = 0; // For Traversing arr[]
        int j = 0; // For Traversing dep[]
        
        int platform_needed = 0; // Current active trains
        int max_platform = INT_MIN; // Mac platform needed
        
        while(i < n && j < n){
            if(arr[i] <= dep[j]){
                platform_needed++; // Extra platform needed 
                i++;
            }
            else if(arr[i] > dep[j]){
                platform_needed--; // Free one platform 
                j++;
            }
            
            max_platform = max(max_platform , platform_needed);
        }
        return max_platform;
    }
};
