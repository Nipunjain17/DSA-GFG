class Solution {
  public:
    void binSort(vector<int> &arr) {
        int n = arr.size();
        int count0 = 0 , count1 = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                count0++;
            }
            else{
                count1++;
            }
        }
        for(int i = 0;i<count0;i++){
            arr[i] = 0;
        }
        for(int i=count0;i<count0+count1;i++){
            arr[i] = 1;
        }
    }
};
