// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // keeps s1 larger
        if(s1.length() < s2.length()) swap(s1,s2);
        
        int i = s1.length() - 1;
        int j = s2.length() - 1;
        
        int carry = 0;
        string result = "";
        
        while(i >= 0 || j >= 0 || carry){
            int sum = carry;
            
            if(i >= 0) sum += s1[i--] - '0';
            if(j >= 0) sum += s2[j--] - '0';
            
            result.push_back((sum%10) + '0');
            carry = sum / 10;
        }
        reverse(result.begin(),result.end());
        
        int idx = 0;
        while (idx < result.size() - 1 && result[idx] == '0') {
            idx++;
        }

        return result.substr(idx);
    }
};