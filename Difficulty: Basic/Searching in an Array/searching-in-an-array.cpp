
class Solution {
  public:
    int search(int k, vector<int>& arr) {
        int index;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k){
                index=i;
                return index+1;
                break;
            }
        }
        return -1;
    }
};
