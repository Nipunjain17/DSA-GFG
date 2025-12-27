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
    string modify(string& s){
        int left = 0, right = s.size() -1;
        while(left < right){
            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isVowel(s[left])) left++;
            else right--;
        }
        return s;
    }
};