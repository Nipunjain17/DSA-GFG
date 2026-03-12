class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        int n = arr.size();
        
        stack<int> st;
        for(int i=0; i<n; i++){
            if(arr[i].back() >= '0' && arr[i].back() <= '9'){
                st.push(stoi(arr[i]));
            }
            else{
                int val1 = st.top();
                st.pop();
                
                int val2 = st.top();
                st.pop();
                
                if(arr[i] == "+"){
                    st.push(val2+val1);
                }
                else if(arr[i] == "-"){
                    st.push(val2-val1);
                }
                else if(arr[i] == "*"){
                    st.push(val2*val1);
                }
                else if(arr[i] == "^"){
                    st.push(pow(val2, val1));
                }
                else{
                    st.push(floor((1.0*val2)/val1));
                }
            }
        }
        return st.top();
    }
};