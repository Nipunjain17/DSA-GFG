// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        
        if(s1.length() < s2.length()) swap(s1,s2);
        
        string result;
        int carry = 0;
        
        int i = s1.length()-1, j = s2.length()-1;
        while(i >= 0 || j >= 0 || carry){
            int sum = carry;
            
            if(i >= 0) sum += s1[i--] - '0';
            if(j >= 0) sum += s2[j--] - '0';
            
            result += (sum%2) + '0';
            carry = sum/2;
        }
        reverse(result.begin(),result.end());
        
        int idx = 0;
        while (idx < result.size() - 1 && result[idx] == '0') {
            idx++;
            
        }
        return result.substr(idx);
    }
};