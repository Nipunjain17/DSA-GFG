class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum == target){
                    return true;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return false;
    }
};