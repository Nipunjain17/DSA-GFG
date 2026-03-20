class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        
        int mul = 1;
        int hasZero = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                hasZero++;
            }
            else{
                mul = arr[i] * mul;
            }
        }
        
        vector<int> res(n,mul);
        
        if(hasZero == 0){
            for(int i=0; i<n; i++){
                int curr = arr[i];
                res[i] = res[i]/curr;
            }
        }
        
        else if(hasZero == 1){
            for(int i=0; i<n; i++){
                if(arr[i] == 0){
                    res[i] = mul;
                }
                else{
                    res[i] = 0;
                }
            }
        }
        
        else{
            for(int i=0; i<n; i++){
                res[i] = 0;
            }
        }
        
        return res;
    }
};
