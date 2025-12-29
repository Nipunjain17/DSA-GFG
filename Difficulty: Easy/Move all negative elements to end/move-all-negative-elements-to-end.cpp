class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> neg;
        
        for(int i=0; i<n; i++){
            if(arr[i] >= 0) arr.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        arr.erase(arr.begin(),arr.begin()+n);
        arr.insert(arr.end(),neg.begin(),neg.end());
    }
};