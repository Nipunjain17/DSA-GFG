class Solution {
  public:
    bool checkRedundancy(string &s) {
        stack<char> st;
        for(auto ch : s){
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                st.push(ch);
            }
            else{
                if(ch == ')'){
                    bool IsRedundant = true;
                    while(st.top() != '('){
                        char top = st.top();
                        if(top == '+' || top == '-' || top == '*' || top == '/'){
                            IsRedundant = false;
                        }
                        st.pop();
                    }
                    
                    if(IsRedundant == true) return true;
                    st.pop();
                }
            }
        }
        return false;
    }
};
