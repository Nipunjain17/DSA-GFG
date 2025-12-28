class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return false;
        for(int i=0; i<n; i++){ // Squares all the element of array
            arr[i] = arr[i] * arr[i];
        }
        unordered_set<int> st(arr.begin(),arr.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int sum = arr[i] + arr[j];
                // check for c^2
                if(st.find(sum) != st.end()) return true;
            }
        }
        return false;
    }
};