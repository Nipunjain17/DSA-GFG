class Solution {
  public:
    vector<int> nFibonacci(int n) {
        int a=0,b=1;
        int fib;
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        for(int i=0;i<n;i++){
            fib = a+b;
            if(fib>n){
                break;
            }
            ans.push_back(fib);
            a = b;
            b = fib;
        }
        return ans;
    }
};