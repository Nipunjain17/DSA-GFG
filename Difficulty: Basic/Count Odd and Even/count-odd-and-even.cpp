class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int n = arr.size();
        
        int odd = 0 , even = 0;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]%2 == 0){
                even++;
            }
            
            else{
                odd++;
            }
        }
        return make_pair(odd,even);
    }
};

