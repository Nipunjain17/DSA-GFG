
class Solution {
  public:
    void sieve(vector<int>& arr, int n){
        vector<bool> prime(n+1,true);
        prime[0] = false;
        prime[1] = false;
        
        for(int i=2; i<=n; i++){
            if(prime[i]){
                for(int j=2*i; j<=n; j=j+i){
                    prime[j] = false;
                }
            }
        }
        
        int left = 2, right = n-1;
        while(left <= right){
            if(prime[left] && prime[right]){
                if(left + right < n) left++;

                else if(left + right > n) right--;
                
                else if(left + right == n){
                    arr.push_back(left);
                    arr.push_back(right);
                    return;
                }
            }
            else{
                if(!prime[left])left++;
                if(!prime[right])right--;
            }
        }
        arr.push_back(-1);
        arr.push_back(-1);
    }
    vector<int> getPrimes(int n) {
        vector<int> arr;
        sieve(arr,n);
        return arr;
    }
};
