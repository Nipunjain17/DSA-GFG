// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int n = arr.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                count++;
            }
        }
        return count;
    }
};