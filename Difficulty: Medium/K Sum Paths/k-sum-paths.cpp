/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  private:
    void solve(Node* root, int k, int&count, vector<int>&path){
        if(root == NULL){
            return;
        }
        
        path.push_back(root->data);
        
        // for left
        solve(root->left, k, count, path);
        // for right
        solve(root->right, k, count, path);
        
        int sum = 0;
        for(int i=path.size()-1; i>=0; i--){
            sum += path[i];
            
            if(sum == k) count++;
        }
        path.pop_back();
        return;
    }
  public:
    int countAllPaths(Node *root, int k) {
        vector<int> arr;
        int count = 0;
        
        solve(root, k, count, arr);
        return count;
    }
};