class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(n >= 3){
            return arr[n-3];
        }
        else{
            return -1;
        }
    }
};