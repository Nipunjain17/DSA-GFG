// User function template for C++
class Solution {
  public:
    virtual bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
        || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        else{
            return false;
        }
    }
    string removeVowels(string& s) {
        string ans;
        
        for(int i=0; i<s.size(); i++){
            if(!isVowel(s[i])){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};