/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/

class Solution {
  private:
    pair<bool, int> SumFast(Node* root){
        if(root == NULL){
            pair<bool ,int> p = make_pair(true,0);
            return p;
        }
        
        if(root->left == NULL && root->right == NULL){
            pair<bool ,int> p = make_pair(true,root->data);
            return p;
        }
        
        pair<bool, int> left = SumFast(root->left);
        pair<bool, int> right = SumFast(root->right);
        
        bool leftTree = left.first;
        bool rightTree = right.first;
        
        bool check = root->data == left.second + right.second;
        
        pair<bool, int> ans;
        if(leftTree && rightTree && check){
            ans.first = true;
            ans.second = left.second + right.second;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
  public:
    bool isSumProperty(Node *root) {
        return SumFast(root).first;
        
    }
};