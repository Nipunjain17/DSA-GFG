class Solution {
  public:
    string firstRepChar(string s) {
        int n = s.length();
        
        int arr[26] = {0};
        string temp="";
        for(int i=0; i<n; i++){
            int index = s[i] - 'a';
            arr[index]++;
            
            if(arr[index] > 1){
                temp.push_back(s[i]);
                return temp;
            }
        }
        return "-1";
    }
};