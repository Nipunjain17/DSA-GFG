class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        vector<int> index = {-1,-1};
        int left = 0;
        int right = n-1;
        while(left <= right){
            if(arr[left] == x && arr[right] == x){
                index[0] = left;
                index [1] = right;
                return index; // This will produce first and last occurence 
            }
            else if(arr[left] != x){
                left++;
            }
            else if(arr[right] != x){
                right--;
            }
        }
        return index; // This will produce [-1,-1]
    }
};