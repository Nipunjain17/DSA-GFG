class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        vector<int> ans;
        d = d%n;
        while(d < n){
            ans.push_back(arr[d]);
            d++;
        }
        int i = 0;
        while(i<d){
            int j = n-d+i;
            ans.push_back(arr[j]);
            i++;
        }
        
        for(int i=0;i<n;i++){
            arr[i] = ans[i];
        }
    } 
};
/*
reverse(arr.begin(), arr.begin() + d);
reverse(arr.begin() + d, arr.end());
reverse(arr.begin(), arr.end());
*/