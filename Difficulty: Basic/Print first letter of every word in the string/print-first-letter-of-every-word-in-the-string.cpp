// User function template for C++
class Solution {
  public:

    string firstAlphabet(string S) {
        string p="";
        p=p+S[0];
        for(int i=0;i<S.length();i++){
            if(S[i]==' '){
                p=p+S[i+1];
                
            }
        }
        return p;
    }
};