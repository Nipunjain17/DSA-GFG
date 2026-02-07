class Solution {
  public:
    string firstNonRepeating(string &s) {
        unordered_map<char,int> count;
        queue<int> q;
        string ans = "";
        
        for(auto ch : s){
            // increase  count of char
            count[ch]++;
            
            // queue mei push char ko
            q.push(ch);
            
            while(!q.empty()){
                if(count[q.front()] > 1){
                    // repeating char
                    q.pop();
                }
                else{
                    // non repeating char
                    ans.push_back(q.front());
                    break;
                }
            }
            
            if(q.empty()){
                ans.push_back('#');
            }
        }
        return ans;
    }
};