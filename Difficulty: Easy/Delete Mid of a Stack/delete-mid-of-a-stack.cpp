class Solution {
  public:
     void solve(stack<int>& s, int k) {
        if(k == 1) {
            s.pop();
            return;
        }
        int x = s.top();
        s.pop();
        solve(s, k - 1);
        s.push(x);
    }
    
    void deleteMid(stack<int>& s) {
        int n = s.size();
        int mid = (n + 1) / 2;
        int k = n - mid + 1;
        solve(s, k);
    }
};