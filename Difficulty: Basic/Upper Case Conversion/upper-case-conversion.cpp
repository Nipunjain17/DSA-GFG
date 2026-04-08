
class Solution {
  public:
    string convert(string& s) {
        int i=0;
        s[i] = s[i]-32;
        for(i=1;i<s.length();i++){
            if(s[i-1]==' '&&s[i]>96){
                s[i] = s[i]-32;
            }
        }
        return s;
    }
};