
class Solution {
  public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
        || ch == 'A' || ch == 'E' || ch == 'I'||ch == 'O' || ch == 'U'){
            return true;
        }
        else{
            return false;
        }
    }
    string removeConsonants(string s) {
        int n = s.length();
        int index = 0;
        for(int i=0;i<n; i++){
            if(isVowel(s[i])){
                s[index++] = s[i];
            }
        }
        s.erase(index); // Erase the part of string after index 
        
        if(s.empty()) return "No Vowel";
        return s;
    }
};