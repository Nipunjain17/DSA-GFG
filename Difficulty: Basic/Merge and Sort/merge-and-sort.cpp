class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        vector<int> ans;
        int i = 0, j = 0;
        while(i < n1 && j < n2){
            if(arr1[i] < arr2[j]){
                ans.push_back(arr1[i++]);
            }
            else if(arr1[i] == arr2[j]){
                ans.push_back(arr1[i++]);
                j++;
            }
            else{
                ans.push_back(arr2[j++]);
            }
        }
        
        while(i < n1){
            ans.push_back(arr1[i++]);
        }
        while(j < n2){
            ans.push_back(arr2[j++]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};