class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> a(n);
        stack<int> small;
        small.push(0);
        
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            while(!small.empty() && curr <= small.top()){
                small.pop();
            }
            a[i] = small.top();
            small.push(curr);
        }
        
        int ans = 0;
        
        vector<int>b(n);
        stack<int> great;
        great.push(0);
        
        for(int i=0; i<n; i++){
            int curr = arr[i];
            while(!great.empty() && curr <= great.top()){
                great.pop();
            }
            b[i] = great.top();
            great.push(curr);
            int diff = abs(a[i]-b[i]);
            ans = max(diff,ans);
        }
        
        return ans;
    }
};