class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stack<string>st;
        string add;
        for(int i=0;i<s.size();i++){
          if(s[i]!='.'){
              add+=s[i];
              if(i==s.size()-1){
                  st.push(add);
                  add.clear();
              }
          }
          else{
              if(!add.empty()){
              st.push(add);}
              add.clear();
          }
          
           
           
        }
        string ans;
        if(st.empty()){return "";}
        if(st.size()==1){
            string p=st.top();
            return p ;
            st.pop();
        }
        while(!st.empty()){
            string p=st.top();
            
            
            st.pop();
             ans+=p;
            if(!st.empty()){
            
             ans+='.';}
    
        }
        return ans;
    }
};