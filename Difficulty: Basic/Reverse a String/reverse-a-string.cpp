// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        int n = s.size();
        
        int left = 0, right = n-1;
        while(left < right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
