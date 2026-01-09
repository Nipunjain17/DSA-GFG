// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        
        int i = 0, index = 0;
        while(i<n){
            if(arr[i] == 0) arr[index++] = 0;
            i++;
        }
        while(index<n) arr[index++] = 1;
    }
};