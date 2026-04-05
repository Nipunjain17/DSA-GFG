/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
    bool solve(struct Node *root, int target, vector<int>& path){
        if(root == NULL) return false;
        
        if(root->data == target){
            return true;
        }
        
        bool leftCheck = solve(root->left, target, path);
        bool rightCheck = solve(root->right, target, path);
        
        if(leftCheck || rightCheck) path.push_back(root->data);
        
        return leftCheck || rightCheck;
        
        
    }
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        
        vector<int> path;
        if(root == NULL || root->data == target) return path;
        
        solve(root, target, path);
        
        return path;
    }
};