// User function Template for C++

class Solution {
  private:
    void rotate(vector<int>& arr, int k){
        // reverse the arr
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        reverse(arr.begin(),arr.end());
    }
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        k = k % m;
        for(int i=0; i<n; i++){
            rotate(mat[i],k);
        }
        return mat;
    }
};