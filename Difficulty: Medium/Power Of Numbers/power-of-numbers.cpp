class Solution {
  private:
    int power(int a, int b){
        // Bqse Case 
        if(b == 1) return a;
        if(b == 0) return 1;
        
        int ans = power (a,b/2);
        
        if(b%2 == 0) return ans * ans;
        else return a * ans * ans;
    }
  public:
    int reverseExponentiation(int n) {
        int original = n;
        int rev = 0;
    
        while(n > 0){
            rev = rev * 10 + n %10;
            n = n/10;
        }
        
        return power(original,rev);
    }
};