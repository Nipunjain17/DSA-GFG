class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(arr[i],maxi);
        }
        int min_diff = INT_MAX;
        int second = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]<maxi){
                int diff = maxi - arr[i];
                if(diff<min_diff){
                   min_diff = diff;
                   second = arr[i];
                }
            }
        }
        if(second != INT_MIN){
            return second;
        }
        else{
            return -1;
        }
    }
};