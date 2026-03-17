/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  private:
    Node* dfs(Node* root, vector<vector<int>>& arr, vector<int>& level){
        if(root == NULL) return root;
        
        level.push_back(root->data);
        root->left = dfs(root->left, arr, level);
        root->right = dfs(root->right, arr, level);
        
        if(root->left == NULL && root->right == NULL){
            arr.push_back(level);
        }
        level.pop_back();
        return root;
    }
  public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        
        if(root == NULL) return ans;
        vector<int> level;
        root = dfs(root, ans, level);
        
        return ans;
    }
};