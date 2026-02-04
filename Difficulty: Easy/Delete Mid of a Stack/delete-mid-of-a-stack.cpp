// User function template for C++

class Solution {
  private:
    void deletion(stack<int> &s, int count, int n){
        if(count == n/2){
            s.pop();
            return;
        }
        
        int data = s.top();
        s.pop();
        
        deletion(s,count+1,n);
        
        s.push(data);
        return;
    }
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int n = s.size();
        deletion(s,0,n);
    }
};