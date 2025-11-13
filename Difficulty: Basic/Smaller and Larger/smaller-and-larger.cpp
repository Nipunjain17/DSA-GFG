// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int n = arr.size();
        
        vector<int> elements;
        int countSmaller = 0, countGreater = 0;
        
        for(int i=0; i<n; i++){
        
            if(target <= arr[i]){
                countGreater++;
            }
            
            if(target >= arr[i]){
                countSmaller++;
            }
        }
        
        elements.push_back(countSmaller);
        elements.push_back(countGreater);
        
        return elements;
    }
};