// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        int m = arr2.size();
        
        vector<int> ans;
        
        int i = 0, j = 0;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i] == arr2[j]){
                ans.push_back(arr1[i]);
                ans.push_back(arr2[j]);
                i++;
                j++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        // Add remaining Elements
        while(i < n){
            ans.push_back(arr1[i]);
            i++;
        }
        
        while(j < m){
            ans.push_back(arr2[j]);
            j++;
        }
        int total = n+m;
        
        int mid1 = total/2;
        int mid2 = total/2 - 1;
        
        int result = ans[mid1] + ans[mid2];
        return result;
    }
};