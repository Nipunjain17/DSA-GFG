/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  private:
   pair<bool,int> balancedFast(Node* root){
       if(root == NULL){
           pair<bool,int> p = make_pair(true,0);
           return p;
       }
       
       pair<bool, int> left = balancedFast(root->left);
       pair<bool, int> right = balancedFast(root->right);
       
       bool leftVal = left.first;
       bool rightVal = right.first;
       
       bool diff = abs(left.second - right.second) <= 1;
       
       pair<bool, int> ans;
       ans.second = max(left.second, right.second) + 1;
       if(leftVal && rightVal && diff){
           ans.first = true;
       }
       else{
           ans.first = false;
       }
       
       return ans;
   }
  public:
    bool isBalanced(Node* root) {
        
        return balancedFast(root).first;
    }
};