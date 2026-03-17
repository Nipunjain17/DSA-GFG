/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  private:
    pair<int, int> sum(Node* root){
        if(root == NULL){
            pair<int, int> p = make_pair(0,0);
            return  p;
        }
        
        pair<int, int>left = sum(root->left);
        pair<int, int>right = sum(root->right);
        
        int height = max(left.first,right.first) + 1;
        
        pair<int, int> ans;
        
        ans.first = height;
        
        if(left.first > right.first){
            ans.second = left.second + root->data;
        }
        else if(left.first == right.first){
            ans.second = max(left.second,right.second) + root->data;
        }
        else{
            ans.second = right.second + root->data;
        }
        
        return ans;
        
    }
  public:
    int sumOfLongRootToLeafPath(Node *root) {
        return sum(root).second;
    }
};