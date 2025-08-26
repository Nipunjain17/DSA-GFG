class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int current = 0;
        int zeroPos = 0;
        int twoPos = n-1;;
        while(current <= twoPos){
            if(arr[current] == 0){
                swap(arr[current],arr[zeroPos]);
                current++;
                zeroPos++;
            }
            else if(arr[current] == 2){
                swap(arr[current],arr[twoPos]);
                twoPos--;
            }
            else{ // arr[current] = 1
                current++;
            }
        }
    }
};