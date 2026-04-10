// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        unordered_set<char> h2;
        for(auto x : str2){    
            h2.insert(x);
        }
        string ans = "";
        for(auto x : str1){    
            if(h2.find(x) == h2.end()){   
                ans += x;
            }
            else{         
                continue;
            }
        }
        return ans; 
    }
};
