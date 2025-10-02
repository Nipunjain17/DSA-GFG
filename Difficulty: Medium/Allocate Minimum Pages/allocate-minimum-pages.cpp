class Solution {
  public:
    
    bool isPossible(vector<int> &arr, int n, int k, int mid){
        int student = 1;
        int pageSum = 0;
        for(int i=0; i<n; i++){
            if(pageSum + arr[i] <= mid){
                pageSum += arr[i];
            }
            else{
                student++;
                if(student > k || arr[i] > mid){
                    return false;
                }
                pageSum = arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        
        int n = arr.size();
        if(k > n){
            return -1;
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        
        int left = 0, right = sum;
        int ans = -1;
        while(left <= right){
            int mid = left +(right - left)/2;
            
            if(isPossible(arr,n,k,mid)){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};