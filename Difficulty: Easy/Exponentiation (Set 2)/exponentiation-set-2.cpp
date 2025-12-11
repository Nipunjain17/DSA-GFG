// User function Template for C++

class Solution {
  public:
    long long int power(int a, long long int b) {
        
        int mod=1e9+7;
        
        if(b == 1) return a;
        if(b == 0) return 1;
        
        long ans = power (a,b/2);
        
        if(b%2 == 0) return (ans * ans)%mod;
        else return  ((ans * ans)%mod * a)%mod;
    }
};